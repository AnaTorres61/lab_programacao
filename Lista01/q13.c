/*Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo e que avariavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores apos a efetivacao do processamento da troca.*/

#include <stdio.h>

int main(){
  short int a,b;
  puts("Digite 2 valores: ");
  printf("A = "); scanf("%hi",&a);
  printf("B = "); scanf("%hi",&b);

  a=a^b; b=a^b; a=a^b;
  
  printf("\nA = %hi e B = %hi",a,b);
  
  return 0;
}