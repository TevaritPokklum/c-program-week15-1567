#include <stdio.h>
int testPointer2()
{
    int x = 20, derf;
    int *ptr;
    printf("Dereferrence");
    printf("Value of x: %d\n", x);
    printf("Value of derf: %d\n", derf);
    printf("Addres of x: %d\n", &x);
    printf("Addres of x: %d\n", &derf);
    printf("Addres of x: %d\n", &ptr);
    return 0;
}