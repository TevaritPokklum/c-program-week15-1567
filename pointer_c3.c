#include <stdio.h>
int testPointer3()
{
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("Value of num = %d\n",num);
    printf("Addres of num = &d\n",&num);
    printf("Addres stored in ptr = &p\n",ptr);
    printf("Derwference value of *ptr = &d\n",ptr);
    *ptr = 6;
      printf("Dereferrence value of *ptr = %d\n", *ptr);
        printf("Value of number = %d\n", num);

     *ptr = 20;
      printf("Dereferrence value of *ptr = %d\n", *ptr);
        printf("Value of number = %d\n", num);



     return 0;
}