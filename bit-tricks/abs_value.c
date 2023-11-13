#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Digite o um numero no qual deseja saber seu valor absoluto\n");
  int x=0;
  scanf("%d", &x);
  printf("Resultado = %d\n", (x & (1<<31) ? (~x+1) : x));
  return 0;
}
