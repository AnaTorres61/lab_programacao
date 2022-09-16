/*Escreva um programa que mostre a diferenca entre pre-incrementar e pos-incrementar usando o operador –-.*/

#include <stdio.h>

int main(){
  int a = 10,b;
  
  puts("\nA = 10");
  
  puts("\nPRE-INCREMENTO:");
  b=++a;
  printf("B = ++A --> B = %d  A = %d",b,a);
  
  puts("\n\nPOS-INCREMENTO:");
  a=10;
  b=a++;
  printf("B = A++ --> B = %d  A = %d",b,a);

  return 0;
}