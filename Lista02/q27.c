/*Escreva um programa que receba varios numeros inteiros (em uma estrutura de laco) e apresente o produto do maior pelo menor numero apresentado. (Obs.: Nao utilize vetores.) A condicao de saıda do laco e o usuario digitar um numero negativo e par.*/

#include <stdio.h>

int main(){
  int n;
  puts("\nDIGITE UM NUMERO INTEIRO:");
  scanf("%d",&n);
  
  int maior=n, menor=n;
  while(1){
    if(n%2==0 && n<0) break;
    if(n<=menor) menor=n;
    if(n>=maior) maior=n;
    puts("\nDIGITE OUTRO NUMERO (PARA ENCERRAR DIGITE 0):");
    scanf("%d",&n);
  }
  
  printf("\n%d × %d = %.2f",maior,menor,(float)maior*menor);

  return 0;
}