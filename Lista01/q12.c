/*Escreva um programa que peça ao usuario para digitar dois numeros, obtenha-os do usuario e imprima a soma, o produto, a diferença, o quociente e o resto da divisao dos dois numeros.*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int n1,n2;
  puts("Digite um número: ");
  scanf("%d",&n1);
  puts("Digite novamente um número: ");
  scanf("%d",&n2);
  printf("\n%d + %d = %d",n1,n2,n1+n2);
  printf("\n%d * %d = %d",n1,n2,n1*n2);
  printf("\n%d - %d = %d",n1,n2,n1-n2);
  printf("\n%d / %d =\n\tquociente:%d\n\tresto:%d",n1,n2,n1/n2,n1%n2);
  return 0;
}