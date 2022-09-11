/*Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e geometrica. (Utilize a funcao pow(base, expoente) da biblioteca math.h).*/

#include <stdio.h>
#include <math.h>

int main(){
  float n1,n2,n3;
  puts("Digite o primeiro numero:");
  scanf("%f",&n1);
  puts("Digite o segundo numero:");
  scanf("%f",&n2);
  puts("Digite o terceiro numero:");
  scanf("%f",&n3);

  printf("\nMedia aritmetica: %.2f",(n1+n2+n3)/3);
  printf("\nMedia geometrica: %.2f\n",pow(n1*n2*n3,1.0/3.0));
  
  return 0;
}