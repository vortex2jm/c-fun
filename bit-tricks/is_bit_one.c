#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x = 0;
  printf("Deseja saber o valor de qual bit[0 - 32] do numero 289.756?\n");
  scanf("%d", &x);

  if(289756 & (1 << x)){
    printf("bit %d = 1\n", x);
  }
  else{
    printf("bit %d = 0\n", x);
  }

  return 0;
}
