/*Uma loja vende seus produtos no sistema entrada mais duas prestacoes, sendo a entrada maior do que ou igual as duas prestacoes; estas devem ser iguais, inteiras e as maiores possıveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestacoes sao iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada e de R$ 102,75 e as duas prestacoes sao iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e forneca o valor da entrada e das duas prestacoes, de acordo com as regras acima.*/

#include <stdio.h>

int main(){
  float valor,prestacao,entrada;
  puts("DIGITE O VALOR DA MERCADORIA:");
  scanf("%f",&valor);
  prestacao=(int)valor/3;
  entrada=valor-2*prestacao;
  printf("\nENTRADA: R$ %.2f\nPRESTAÇÕES: 2x R$ %.2f",entrada,prestacao);

  return 0;
}