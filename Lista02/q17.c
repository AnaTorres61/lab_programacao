/*Elaborar um programa que apresente os valores de conversao de graus Celsius em graus Fahrenheit, de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a formula de conversao.*/

#include <stdio.h>

int celsiusToFahrenheit(int tempCels) {
  return 1.8 * tempCels + 32;
}

int main(){
  puts("Celsius      Fahrenheit");
  for(int i=10; i<101; i+=10){
    printf("  %d",i);
    printf("\t\t\t%d\n",celsiusToFahrenheit(i));
  }

  return 0;
}