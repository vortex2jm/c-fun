#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 30548;
  int b = 579820;

  printf("before\n");
  printf("a = %d; b = %d\n", a,b);

  a = a ^ b;
  b = b ^ a;
  a = a ^ b;

  printf("\nafter\n");
  printf("a = %d; b = %d\n", a,b);
  
  return 0;
}
