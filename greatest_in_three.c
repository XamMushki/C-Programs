#include <stdio.h>

float greatestInThree(int a, int b, int c)
{
    if (a >= b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b >= a)
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    int greatest,num1, num2, num3;

    printf("\nGreatest In Three\n");

    printf("num1 = ");
    scanf("%d", &num1);

    printf("num2 = ");
    scanf("%d", &num2);

    printf("num3 = ");
    scanf("%d", &num3);  

    greatest = greatestInThree(num1, num2, num3);
    printf("Greatest Number = %d\n", greatest);

}
