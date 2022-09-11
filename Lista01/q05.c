/*Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.*/

#include <stdio.h>

int main() {
  float conta;
  puts("Digite o valor da conta: ");
  scanf("%f",&conta);
  printf("Valor total da compra: %.2f",conta*0.1+conta);
  
  return 0;
}