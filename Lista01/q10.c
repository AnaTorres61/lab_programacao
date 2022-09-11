/*Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.*/

#include <stdio.h>

int main() {
  float comp,larg,alt;
  
  puts("Digite o comprimento da caixa (cm): ");
  scanf("%f",&comp);
  puts("Digite a largura da caixa (cm): ");
  scanf("%f",&larg);
  puts("Digite a altura da caixa (cm): ");
  scanf("%f",&alt);

  printf("\nVolume da caixa = %.2f",comp*larg*alt);
  
  return 0;
}