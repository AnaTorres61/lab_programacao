/*Sabendo que os argumentos da função ”printf” podem ser expressões (a+b, a/b, a*b...), e não somente argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.*/

#include <stdio.h>

int main() {
  int x;
  puts("Digite um valor inteiro: ");
  scanf("%d",&x);
  printf("Triplo = %d",3*x);
  printf("\nQuadrado = %d",x*x);
  printf("\nMeio = %.1f",((float)x)/2);
  
  return 0;
}