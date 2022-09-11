/*Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.*/

#include <stdio.h>

int main() {
  short int n;

  puts("Digite um valor inteiro: ");
  scanf("%hi",&n);

  printf("\n%hi^2 = %d",n,n*n);
  return 0;
}