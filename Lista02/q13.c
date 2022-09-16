/*Elabore um programa que calcule o somatorio de todos os numeros pares pertencentes a faixa A,B especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main(){
  int a,b,somatorio=0;
  
  printf("FAIXA DE VALORES DE ");  scanf("%d",&a);
  printf("A ");  scanf("%d",&b);

  if(a>b){a=a^b;  b=a^b;  a=a^b;}
  
  for(int i=a; i<=b; i++){
      if(!(i%2)) somatorio+=i;
  }
  
  printf("SOMATORIO DOS NUMEROS PARES DE %d a %d: %d",a,b,somatorio);

  return 0;
}