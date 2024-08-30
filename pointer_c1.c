#include <stdio.h>
int testPointer()
{
    int var = 10;
    int *ptr;
    ptr  = &var;
    printf("Value addres  at var = %p\n", ptr);
    printf("Value addres  at var = %p\n", &ptr);
    printf("Value at var = %d\n", var);
    printf("Value at pointer = %d\n", *ptr);
}
