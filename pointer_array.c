#include <stdio.h>
int mainPtrAndArray()
{
  int x[3]={5,10,15};
  int *ptr;
  ptr = x;
  ptr  = &x[0];
  ptr  = &x[1];
  ptr  = &x[2];
  for (int i = 0; i <= 3; i++)
{
    printf("%d/n", x[i]);
}
  printf("Element of the array are:");
  printf("%d,%d,%d",ptr[0],ptr[1],ptr[2]);
  printf("Addres of x: %d\n", &x);
  printf("Addres of x: %d\n", &ptr);
  return 0;
}