#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Desligando o bit mais à direita de 6\n");
  printf("Resultado = %d\n", 6 & (6 - 1));
  return 0;
}
