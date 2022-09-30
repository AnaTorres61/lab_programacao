//Faca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do menor e maior elemento do vetor fornecido.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
#define MX 100

int main(void) {
  float v[TAM],menor,maior;

  srand(time(NULL));
  for(int i=0; i<TAM; i++){
    v[i] = ((float)rand()/RAND_MAX)*MX;
  }
  menor = v[0];
  maior = v[0];
  for(int i=1; i<TAM; i++){
    menor = (menor>v[i]) ? v[i] : menor;
    maior = (maior<v[i]) ? v[i] : maior;
  }

  for(int i=0; i<TAM; i++){
    printf("%.1f ",v[i]);
  }
  printf("\n");
  printf("MENOR: %.1f\nMAIOR: %.1f",menor,maior);
  
  return 0;
}