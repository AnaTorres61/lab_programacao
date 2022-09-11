/*Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais que o usuario deseja converter.*/

#include <stdio.h>

int main(void) {
  float cotacao,real;
  
  puts("Digite a cotação do dólar: ");
  scanf("%f",&cotacao);
  puts("Digite o valor em reais a ser convertido: ");
  scanf("%f",&real);
  printf("\nValor em dólar = %.2f",real/cotacao);
  
  return 0;
}