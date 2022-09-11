/*Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em grausFahrenheit. A formula de versao e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main(){
  int cel,fah;
  
  puts("Digite a temperatura em graus Celsius:");
  scanf("%d",&cel);

  fah=(9 * cel + 160) / 5;

  printf("A temperatura em Fahrenheit é %d",fah);
  
  return 0;
}