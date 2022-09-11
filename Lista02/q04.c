/*Implementar um programa para resolver o seguinte problema: Jose tem 150 centımetros e cresce 2 centımetros por ano. O Pedro tem 110 centımetros e cresce 3 centımetros por ano. Em quantos anos Pedro sera maior que Jose?*/

#include <stdio.h>

int main(){
  short int jose=150, pedro=110, anos=0;
  do{
    anos++;
    jose+=2; pedro+=3;
  }while(jose>=pedro);
  
  printf("\nEm %hi anos Pedro será maoir que José",anos);

  return 0;
}