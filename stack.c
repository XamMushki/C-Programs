#include <stdio.h>
int n = 5;
int stack[5];

int items_in_stack = 0;

void push(int element)
{
    if (items_in_stack >= n)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        items_in_stack++;

        for (int i = n - 1; i >= 0; i--)
        {
            stack[i] = stack[i - 1];
        }
        stack[0] = element;
        printf("Push!\n");
        for (int i = 0; i < items_in_stack; i++)
        {
            printf("%d, ", stack[i]);
        }
        printf("\n");
    }
}
int pop()
{
    if (items_in_stack > 0)
    {
        for (int i = 0; i < n; i++)
        {
            stack[i] = stack[i + 1];
        }
        items_in_stack--;
    }
    else
    {
        printf("Stack Underflow!");
    }
    printf("Pop!\n");
    for (int i = 0; i < items_in_stack; i++)
    {
        printf("%d, ", stack[i]);
    }
    printf("\n");
}

int main()
{
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    // stack overflow
    push(7);

    pop();
    pop();
    pop();
    push(13);
    

    return 0;
}