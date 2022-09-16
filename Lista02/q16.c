/*Escreva um programa que apresente o somatorio de todos os numeros divisıveis por 3 pertencentes ao intervalo [0,100] e o somatorio de todos os numeros divisıveis por 5 pertencentes ao intervalo [100,200]. Obs.: Utilize apenas um laco de repeticao.*/

#include <stdio.h>

int main(){
  int somatorio3=0,somatorio5=0;
  
  for(int i=0; i<201; i++){
    if(i<101){
      if(!(i%3)) somatorio3+=i;
    }else if(!(i%5)) somatorio5+=i;
  }
  
  printf("\nSomatorio de todos os numeros divisıveis por 3 pertencentes ao intervalo [0,100]\n%d",somatorio3);
  printf("\nSomatorio de todos os numeros divisıveis por 5 pertencentes ao intervalo [100,200]\n%d",somatorio5);
  
  return 0;
}