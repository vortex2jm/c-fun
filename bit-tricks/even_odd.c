#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Digite o numero no qual deseja saber se eh par ou impar\n");
  int x=0;
  scanf("%d",&x);

  if(!(x & 1))
    printf("par\n");
  else
    printf("impar\n");

  return 0;
}
