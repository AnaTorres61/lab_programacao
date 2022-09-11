/*Escreva um programa que leia um numero inteiro e positivo F e calcule o fatorial deste numero.*/

#include <stdio.h>

int main(){
  short int x;
  int fatorial=1;
  
  do{
    puts("\nDigite um número inteiro positivo:");
    scanf("%hi",&x);
  }while(x<0);

  for(short int i=2;i<=x;i++){
    fatorial*=i;
  }
  printf("%d",fatorial);
  return 0;
}