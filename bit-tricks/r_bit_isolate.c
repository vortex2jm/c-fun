#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Isolando o bit mais à direita do inteiro 7\n");
  printf("Resultado = %d\n", 7 & ~(7-1));
  return 0;
}
