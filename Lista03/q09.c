//Faca um programa que leia uma matriz bidimensional do usuario, de dimensao 3x3, e apresente os elementos da diagonal principal.

#include <stdio.h>

#define TAM 3

int main(void) {
  int matriz[TAM][TAM];
  
  for(int l= 0; l<TAM; l++){
    for(int c= 0; c<TAM; c++){
      printf ("\nElemento[%d][%d] = ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }

  puts("\nElementos da diagonal principal:");
  for(int i=0; i<TAM; i++){
    printf("%d ",matriz[i][i]);
  }
  
  return 0;
}