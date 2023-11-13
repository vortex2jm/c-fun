#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("digite o numero que deseja dividir por 2\n");
  int x=0;
  scanf("%d", &x);
  // Para dividir em 4/8/16... trocar o valor 1 para 2/3/4...
  printf("%d\n", x >> 1);
  return 0;
}
