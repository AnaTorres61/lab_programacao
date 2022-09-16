/*Um palındromo e um numero, ou frase textual, que pode ser lido da mesma forma da esquerda para a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dıgitos e um palındromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dıgitos e determine se ele e ou nao um palındromo. [Dica: use os operadores de divisao e modulo para separar o numero em seus dıgitos individuais.]*/

#include <stdio.h>

int contaDigitos(int valor){
  int qtd = 0;
  if (valor == 0) qtd = 1;
  else{
    while (valor != 0){
      qtd = qtd + 1;
      valor = valor / 10;
    }
  }
  return (qtd!=5);
}

int main(){
  int num;
  do{
    puts("ENTRE COM UM NUMERO INTEIRO DE 5 DIGITOS: ");
    scanf("%d",&num);
  }while(contaDigitos(num));
  
  int u = num%10;
  int d = (num/10)%10;
  int c = (num/100)%10;
  int um = (num/1000)%10;
  int dm = (num/10000)%10;
  int invertido = u*10000+d*1000+c*100+um*10+dm;

  printf("\nO numero %d ",num);
  if(num!=invertido) printf("NAO ");
  printf("E um palındromo");

  return 0;
}