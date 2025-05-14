#include <stdio.h>
#include <ctype.h>
#include <string.h>

void desenharForca(int erros) {
  printf("\n _________\n");
  printf(" |       |\n");
  printf(" |       %c\n",(erros >=1) ?  '0' : ' ');
  printf(" |      %c%c%c\n", (erros>=3) ? '/' : ' ',(erros>=2) ? '|': ' ' , (erros >= 4) ? '\\' : ' ');
  printf(" |      %c %c\n", (erros >= 5) ? '/' : ' ' , (erros>=6) ? '\\' : ' ');
  printf("_|_\n\n");
}

int main (){
  char palavraSecreta[] = "abelha";
  int tamanho = strlen(palavraSecreta);
  char letra;
  int tentativas = 6;
  int acertos = 0 ;
  char descobertas[tamanho];
  int letrasUsadas [26] = {0};
  int erros = 0;
  
  for(int i = 0;i<tamanho; i ++)
    descobertas[i] = '_';
  

  printf("=== Jogo da Forca ===\n");

 while (tentativas > 0 && acertos < tamanho ){
   desenharForca(erros);

  

   printf("Palavra: ");
   for(int i = 0;i<tamanho; i ++)
      printf("%c",descobertas[i]);

   printf("\nTentativas :%d",tentativas);
   printf("digite uma letra; ");
   scanf("%c",&letra);

   letra = tolower(letra);

   if (letrasUsadas[letra - 'a']) {
     printf("voce já tentou esta letra'%c' . tente novamente\n");
     continue
   }

   letrasUsadas[letra-' '] = 1;

int encontrou = 0 ;
 for(int i = 0;i<tamanho; i ++){
   if (palavraSecreta[i]== letra&& descobertas [i]==
     '_'){
     descobertas[1] = letra;
     acertos++;
     encontrou = 1;
   }
 }

   if (encontrou){
     printf("Letra incorreta!\n");
     tentativas--;
     erros ++ ;
     
   }
 }


  
return 0;
}