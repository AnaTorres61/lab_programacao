/*Elaborar um programa que mostre os resultados da tabuada de um numero inteiro qualquer, a qual deve ser apresentada de acordo com sua forma tradicional.*/

#include <stdio.h>

int main(){
  int x;
  puts("DIGITE UM NUMERO INTEIRO:");
  scanf("%d",&x);
  for(int i=0;i<11;i++){
    printf("\n%d x %d = %d",x,i,x*i);
  }

  return 0;
}