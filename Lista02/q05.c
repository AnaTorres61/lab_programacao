/*Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido. A condicao de termino do programa e quando o usuario digitar zero.*/

#include <stdio.h>
#include<stdlib.h>

int main(){
  int n;
  puts("\nDIGITE UM NUMERO INTEIRO:");
  scanf("%d",&n);
  
  int maior=n, menor=n;
  while(n!=0){
    if(n<=menor) menor=n;
    if(n>=maior) maior=n;
    puts("\nDIGITE OUTRO NUMERO (PARA ENCERRAR DIGITE 0):");
    scanf("%d",&n);
  }
  
  printf("\nO MENOR NUMERO E: %d",menor);
  printf("\nO MAIOR NUMERO E: %d",maior);
  return 0;
}