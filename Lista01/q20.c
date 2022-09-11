/*Escreva um programa que receba um numero inteiro e entao determine e imprima se ele e par ou ımpar. Obs.: Nao utilizar estrutura de decisao if.*/

#include <stdio.h>

int main(){
  short int x;
  puts("Digite um número inteiro:");
  scanf("%hi",&x);
  (x%2) ? printf("\n%hi é ímpar!",x) : printf("\n%hi é par!",x);
  
  return 0;
}