#include <stdio.h>

int main(){
    int var = 20;   // actual variable
    int *ip;        // pointer variable

    ip = &var;      // store address of var in ip pointer

    printf("\nAddress of var using pointer: %p\n", ip);
    printf("Address of var without pointer: %p\n", &var);
    printf("Value of var: %d\n", var);
    printf("Value of *ip pointer: %d\n", *ip);
    
    *ip = 13;
    // value of var also changes because it changes the value using direct address and 
    // both point to the same memory location.

    printf("After changing value using *ip i.e, *ip=13\n");
    printf("Value of var: %d\n", var);
    printf("Value of *ip pointer: %d\n", *ip);

    //Null pointer
    int *ptr;
    ptr = &var;
    
    printf("Value of a null pointer: %p\n", ptr);
    if (ptr)
    {
        printf("ptr not null\n");
    }
    if (!ptr){
        printf("ptr is null.\n");
    }

    //Pointer Arithematic
    int v=20;
    int *p;
    p=&v;
    printf("Pointer Value intially : %p\n", p);

    p++;
    printf("Pointer Value after p++: %p\n", p);
    
    p--;
    printf("Pointer Value after p--: %p\n", p);
    
    return 0;
}