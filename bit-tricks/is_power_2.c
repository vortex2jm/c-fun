#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Digite o numero e verifique se eh potencia de 2\n");  
  int x=0;
  scanf("%d", &x);

  // Desligue o bit mais à direita e verifique se o resultado eh zero
  if(!(x & (x-1))){
    printf("Eh potencia de 2\n");
  }
  else{
    printf("Nao eh potencia e 2\n");
  }
  
  return 0;
}
