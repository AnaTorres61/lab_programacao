/*Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de dias trabalhados pelo vendedor e imprima o valor liquido a ser pago ao mesmo, sabendo que se ele trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%. Sempre sao descontados 10% de imposto de renda em cima do valor bruto.*/

#include <stdio.h>
#define diaria 50.25

int main(){
  int dias; float liquido;
  puts("Digite o número de dias trabalhados:");
  scanf("%d",&dias);

  liquido=dias*diaria;
  liquido-=liquido*0.1;

  if(dias>20)
    liquido+=liquido*0.3;
  else if(dias>10)
    liquido+=liquido*0.2;

  printf("Valor líquido a ser pago: %.2f", liquido);

  return 0;
}