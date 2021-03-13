#include <stdio.h>

int main()
{
    printf("\nArrays in C\n");
    int n=20;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    // deleting index 12
    for (int i = 12; i < n; i++)
    {
        arr[i]=arr[i+1];
        
    }
    printf("\nAfter Deleting\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}