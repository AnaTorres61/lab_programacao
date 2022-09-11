/*Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, e necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario liquido do professor.*/

#include <stdio.h>

int main(){
  float horaAula, horaTrabalhada, descontoInss, bruto;
  puts("Digite o valor da hora aula: ");
  scanf("%f",&horaAula);
  puts("Digite o número de horas trabalhadas no mês: ");
  scanf("%f",&horaTrabalhada);
  puts("Digite o percentual de desconto do INSS (sem %): ");
  scanf("%f",&descontoInss);

  bruto = horaAula*horaTrabalhada;
  
  printf("\nSalário bruto: %.2f",bruto);
  printf("\nSalário líquido: %.2f",bruto -bruto*descontoInss/100);
  
  return 0;
}