/*Escreva um programa que imprima uma tabela dos equivalentes binario, octal e hexadecimal dos numeros decimais no intervalo de 1 a 256.*/

#include <stdio.h>
#define TAM 8
//TAM = quantidades de bits -1

int main(){
  puts("DECIMAL\t\t BINARIO\t\t  OCTAL\t\tHEXADECIMAL\n");
  for(int i=1; i<257; i++){
    printf("%d\t\t\t",i);
    for(int j=TAM; j>=0; j--){
      printf("%d",(i>>j)&1);
    }
    printf("\t\t\t%o\t\t\t%x\n",i,i);
  }

  return 0;
}