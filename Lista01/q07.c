/*Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/

#include <stdio.h>

int main() {
  unsigned short int h,m,s,segundos;
  
  puts("Horas: ");
  scanf("%hu",&h);
  puts("Minutos: ");
  scanf("%hu",&m);
  puts("Segundos: ");
  scanf("%hu",&s);

  segundos=s+60*m+3600*h;
  printf("\n Total de segundos = %hu",segundos);
  
  return 0;
}