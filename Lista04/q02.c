//Escreva um programa que troque o valor de dois numeros utilizando ponteiros.

#include <stdio.h>

void trocar(int *,int *);

int main(){
  int num1, num2;
  int *p1=&num1, *p2=&num2;

  puts("Entre com os 2 números:");
  scanf("%d%d",p1,p2);

  printf("\n\nnum1 = %d\tnum2 = %d",num1,num2);
  trocar(p1,p2);
  printf("\nnum1 = %d\tnum2 = %d",num1,num2);
  
  return 0;
}

void trocar(int *p1, int *p2){
  *p1^=*p2;
  *p2^=*p1;
  *p1^=*p2;
}