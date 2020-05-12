#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  char sair = 'n';
  MENU:
  printf("sair?");
  scanf("%c", &sair);
  if(sair != 's')
  goto MENU;

}