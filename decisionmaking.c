#include <stdio.h>
int evenOrOdd(int num)
{
    int even = num % 2;
    switch (even)
    {
    case 0:
        printf("Even!\n");
        break;
    case !0:
        printf("Odd!\n");
        break;
    default:
        printf("Don't know what just happened");
    }
    return 0;
}
int main()
{
    int num;
    printf("\nNum: ");
    scanf("%d", &num);
    int res = evenOrOdd(num);

    return 0;
}