/*Elabore um programa que apresente a quantidade de numeros divisıveis por 3 pertencentes a faixa A,B especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main(){
  int a,b,qtd=0;
  
  printf("FAIXA DE VALORES DE ");
  scanf("%d",&a);
  printf("A ");
  scanf("%d",&b);

  if(a>b){
    a=a^b;  
    b=a^b;  
    a=a^b;
  }
  
  for(int i=a; i<=b; i++){
      if(!(i%3)) qtd++;
  }
  printf("QUANTIDADE DE NUMEROS DIVISIVEIS POR 3: %d",qtd);

  return 0;
}