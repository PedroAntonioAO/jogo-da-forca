#include <stdio.h>
#include <ctype.h>
#include <string.h>

void desenharForca(int erros) {
  printf("\n _______\n");
  printf(" |       |\n");
  printf(" |       %c\n",(erros >=1) ? 'O' : ' ');
  printf(" |      %c%c%c\n", (erros>=3) ? '/' : ' ',(erros>=2) ? '|': ' ' , (erros >= 4) ? '\\' : ' ');
  printf(" |      %c %c\n", (erros >= 5) ? '/' : ' ' , (erros>=6) ? '\\' : ' ');
  printf("_|_\n\n");
}

int main (){

  int erros = 6;
  desenharForca(erros);
return 0;
}