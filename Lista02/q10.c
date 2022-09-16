/*Elabore um programa que apresente os quadrados dos numeros inteiros multiplos de 4 existentes na faixa de valores de 15 a 90.*/

#include <stdio.h>
#include <math.h>

int main(){
    for(int i=15; i<91; i++){
      if(!(i%4)) printf("%.f ",pow(i,2));
    }
  return 0;
}