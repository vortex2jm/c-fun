#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Deseja imprimir os bits de qual numero inteiro?\n");
  int x=0;
  scanf("%d", &x);  

  for(int i=32; i>0; i--){
    if(!(i%8))
      printf(" ");
    if(x&(1<<i)){
      printf("1");
      continue;
    }
    printf("0");
  }
  printf("\n");

  return 0;
}
