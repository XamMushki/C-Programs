#include <stdio.h>

// format document using: ctrl + shift + I

int whileLoop()
{

    int i = 1;
    int n = 3;
    printf("\n");
    printf("No. of Numbers, n = ");
    scanf("%d", &n);
    printf("sum of first %d numbers.\n", n);
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        // printf("%d  ",i);
        i++;
    }
    printf("Sum = %d", sum);
    printf("\n\n");

    return 0;
}
int forLoop()
{
    // Problem with Fibonacci Sequence:
    /* I am writing a program to generate a Fibonacci sequence for values with up to 1000 digits.
    Not yet you aren't. You are storing the values in variables of type int.
    Commonly such variables are 32 bit values and have a maximum possible value of 2^31 - 1.
    That equals 2,147,483,647 which is some way short of your goal of reaching 1,000 digits.
    The 47th Fibonacci number is the first number to exceed 2,147,483,647.
    According to Wolfram Alpha, the value is 2,971,215,073.
    When your program attempts to calculate such a number it suffers from integer overflow,
    because the true value cannot be stored in an int. You could try to analyse exactly what happens when you overflow,
    why you see negative values, but it really doesn't get you very far. Simply put, what you are attempting is clearly
    impossible with int. In order to reach 1,000 digits you need to use a big integer type.
    None of the built-in types can handle numbers as large as you intend to handle. */

    //Fibonacci Sequence
    int limit;
    signed int term = 1;
    signed int last_term = 0;
    printf("Number of Terms: ");
    scanf("%d", &limit);
    printf("\nFibonacci Sequence\n");
    for (int i = 0; i < limit; i++)
    {
        printf("%d, ", last_term);
        signed int temp = last_term;
        last_term += term;
        term = temp;
    }
    printf("\n");
    return 0;
}
int main()
{
    int s = forLoop();

    // int s = whileLoop();
    return 0;
}