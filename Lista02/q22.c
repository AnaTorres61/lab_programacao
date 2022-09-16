/*Escreva um programa que leia um numero inteiro e determine e imprima quantos dıgitos no inteiro sao algarismos 7.*/

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
  return qtd;
}

int main(){
  int num,setes=0;
  
  puts("ENTRE COM UM NUMERO: ");
  scanf("%d",&num);
  
  if(num<0) num*=(-1);
  int qtd=contaDigitos(num);
  for(int i=1; qtd!=0; i*=10){
    int digito = (num/i)%10;
    if(digito==7) setes++;
    qtd--;
  }
  
  printf("\nO NUMERO TEM %d DIGITOS 7",setes);

  return 0;
}