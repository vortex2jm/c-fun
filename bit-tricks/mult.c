#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Digite o valor no qual deseja multiplicar por 2\n");
  int x=0;
  scanf("%d", &x);
  printf("Resultado = %d\n", x << 1);
  return 0;
}
