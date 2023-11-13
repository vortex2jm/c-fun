#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Qual bit do numero 31 deseja desligar? [0/1/2/3/4]\n");
  int x=0;
  scanf("%d", &x);

  printf("Resultado = %d\n", 31 & ~(1 << x));
  
  return 0;
}
