//Faca um programa em C que gere um vetor com 3 numeros inteiros pseudoaleatorios no intervalo [0, 19] e apresente a sua media aritmetica e geometrica.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MX 20

int main(void) {
  int vetor[TAM],soma=0,produto=1;

  printf("Números: ");
  srand(time(NULL));
  for(int i=0; i<TAM; i++){
    vetor[i] = rand()%MX;
    soma+=vetor[i];
    produto*=vetor[i];
    printf("%d ",vetor[i]);
  }
  
  printf("\n\nMédia aritmética: %.2f",(float)soma/TAM);
  printf("\nMédia geométrica: %.2f",pow(produto,1.0/TAM));
  
  return 0;
}