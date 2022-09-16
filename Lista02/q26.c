/*Escreva um programa que imprima uma tabela dos equivalentes binario, octal e hexadecimal dos numeros decimais no intervalo de 1 a 256.*/

#include <stdio.h>
#define TAM 8

int bin[TAM];

void decimalToBinario(int dec){
  int bit;
  for(int i=TAM; i>=0; i--){
    if(dec==1){
      bit=1;
      dec--;
    }else if(dec==0) bit=0;
    else{
      bit=dec%2;
      dec=dec/2;
    }
    bin[i]=bit;
  }
}

int main(){
  puts("DECIMAL\t\t BINARIO\t\t  OCTAL\t\tHEXADECIMAL\n");
  for(int i=1; i<257; i++){
    printf("%d\t\t\t",i);
    decimalToBinario(i);
    for(int j=0; j<=TAM; j++){
      printf("%d",bin[j]);
    }
    printf("\t\t\t%o\t\t\t%x\n",i,i);
  }

  return 0;
}