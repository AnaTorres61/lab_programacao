/*Fa ̧ca um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal.*/

#include <stdio.h>

int main() {
  float x;
  puts("Digite um número real: ");
  scanf("%f",&x);
  printf("x = %.1f",x);
  return 0;
}