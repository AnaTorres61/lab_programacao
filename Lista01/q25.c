/*Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.*/

#include <stdio.h>

int main(){
  int seg, h, m, s, resto;

  puts("Digite um tempo em segundos:");
  scanf("%d", &seg);
  
  h = seg/3600;
  resto = seg%3600;
  m = resto/60;
  s = resto%60;
  printf("\n%02d:%02d:%02d\n",h,m,s);
  
  return 0;
}