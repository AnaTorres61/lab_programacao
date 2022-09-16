/*Escreva um algoritmo que gere a serie de Fibonacci ate o vigesimo termo.*/

#include <stdio.h>

int main(){
  short int aux1=1, aux2=1,x;
  for(short int i=1; i<21; i++){
    x = (i<3) ? 1 : aux1+aux2;
    printf("%hi ",x);
    aux1=aux2;  aux2=x;
  }

  return 0;
}