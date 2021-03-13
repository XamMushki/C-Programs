#include <stdio.h>
#include <limits.h>

int sum();

int main()
{
    int x, y;
    int a = sizeof(long int);
    printf("\nSize : %d\n\n", a);

    printf("Sum\n");
    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);
    int s = sum(x, y);
    printf("Sum = %d\n", s);
    return 0;
}
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}