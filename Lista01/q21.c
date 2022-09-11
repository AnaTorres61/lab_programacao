/*Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro e multiplo do segundo. Obs.: Nao utilizar estrutura de decisao if.*/

#include <stdio.h>

int main(){
  short int x,y;
  puts("Digite um número inteiro:");
  scanf("%hi",&x);
  puts("Digite outro número inteiro:");
  scanf("%hi",&y);

  (x%y) ? printf("%hi não é múltiplo de %hi",x,y) : printf("%hi é múltiplo de %hi",x,y);
  
  return 0;
}