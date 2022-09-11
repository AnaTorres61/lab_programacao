/*Escreva um programa que receba a entrada de um numero de tres dıgitos, separe o numero em seus dıgitos componentes e reconstrua um numero com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.*/

#include <stdio.h>

int main(){
  short int x,u,d,c;
  do{
    puts("\nDigite um numero de 3 digitos:");
    scanf("%hi",&x);
  }while(!(x>99&&x<999));

  u = x%10;  d = (x/10)%10;  c = (x/100)%10;  x = u*100+d*10+c;
  
  printf("%hi\n",x);
  
  return 0;
}