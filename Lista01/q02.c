/*Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12*/

#include <stdio.h>

int main() {
  int x;
  puts("Digite um valor inteiro decimal: ");
  scanf("%d",&x);
  printf("Hexadecimal: %x",x);
  printf("\nOctal: %o",x);
  
  return 0;
}