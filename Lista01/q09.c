/*Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores sucessor e antecessor.*/

#include <stdio.h>

int main() {
  short int n;

  puts("Digite um valor inteiro: ");
  scanf("%hi",&n);

  printf("\nAntecessor: %d",n-1);
  printf("\nSucessor: %d",n+1);
  
  return 0;
}