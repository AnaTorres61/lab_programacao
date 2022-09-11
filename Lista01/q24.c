/*Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. Obs.: Utilize operadores binarios.*/

#include <stdio.h>

int main(){
  short int x,n,produto;
  printf("\n2 elevado a ");
  scanf("%hi",&n);
  printf("vezes ");
  scanf("%hi",&x);

  printf("\n2^%hi x %hi = %hi\n",n,x,(2<<(n-1))*x);
  
  return 0;
}