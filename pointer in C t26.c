#include <stdio.h>

int main()
{
      printf( "Lets Learn about pointers\n");
      int a=88;
      int* ptra =&a;
      printf("The value of a is %x\n",ptra);
      printf("The address of pointer to a is %p\n", &ptra);
      printf("The value of a is %x\n",ptra);
      return 0;
} 