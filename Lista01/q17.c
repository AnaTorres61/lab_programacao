/*Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo). Nao utilize estrutura de decisao if.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  short int x;
  puts("Digite um valor inteiro: ");
  scanf("%hi",&x);

  printf("\n|%hi| = %d",x,abs(x));

  return 0;
}