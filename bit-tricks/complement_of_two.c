#include <stdio.h>

int main(int argc, char const *argv[])
{
 printf("Digite um numero para fazer seu complemento de 2\n");
 int x=0;
 scanf("%d", &x);
 printf("Resultado = %d\n",(~x+1));
  return 0;
}
