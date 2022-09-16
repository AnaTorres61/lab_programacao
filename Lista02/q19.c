/*Elaborar um programa que apresente a media aritmetica dos numeros inteiros existentes entre uma faixa especificada pelo usuario.*/

#include <stdio.h>

int main(){
  int a,b,somatorio=0,qtd=0;
  
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
    somatorio+=i;
    qtd++;
  }
  printf("MEDIA ARITMETICA = %.2f",((float)somatorio)/qtd);

  return 0;
}