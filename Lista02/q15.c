/*Elaborar um programa que apresente os resultados das potencias do valor de base 3, elevado a um expoente que varie do valor 0 a 7.*/

#include <stdio.h>
#include <math.h>

int main(){
  for(int i=0; i<8; i++){
    printf("%.f ",pow(3,i));
  }
  return 0;
}