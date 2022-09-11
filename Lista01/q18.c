/*Escreva um programa que leia o raio de um cırculo e imprima seu diametro, o valor de sua circunferencia e sua area. Use o valor de 3,14159 para ”pi”. Faca cada um destes calculos dentro da instrucao (ou instrucoes) printf e use o especificador de conversao %f.*/

#include <stdio.h>

int main(){
  float raio;
  puts("Digite o raio do circulo: ");
  scanf("%f",&raio);

  printf("\nDiametro: %.2f",2*raio);
  printf("\nCircunferencia: %.2f",2*3.14159*raio);
  printf("\nArea: %.2f",3.14159*raio*raio);
  
  return 0;
}