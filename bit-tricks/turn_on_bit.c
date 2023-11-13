#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Deseja ligar qual bit? [0-32]\n");
  
  int x=0;
  scanf("%d", &x);

  printf("Resultado = %d\n", 0 | (1 << x));

  return 0;
}
