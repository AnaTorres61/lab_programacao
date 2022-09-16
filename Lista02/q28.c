/*Escreva um programa que receba dois valores numericos X e Y (unsigned char) e esconda todos os bits de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores a Y. (Obs.: Nao utilizar valores para Y menores que 5).*/

#include <stdio.h>
#define TAM 7

int main(){
  unsigned char x,y;

  puts("\nDIGITE O NUMERO A SER ESCONDIDO:");
  scanf("%hhu",&x);
  do{
    puts("DIGITE OUTRO NUMERO (MAIOR OU IGUAL A 5):");
    scanf("%hhu",&y);
  }while(y<5);
  puts("");

  int j=TAM;
  for(int i=4; i>(-5); i--){
    if(i==0) continue;
    else{
      printf("%d ",(y+i)&0xfe|(x>>j)&1);
      j--;
    }
  }
  
  return 0;
}