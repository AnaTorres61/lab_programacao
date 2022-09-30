//Faca um programa em C que gere um vetor com 100 numeros inteiros pseudoaleatorios no intervalo definido pelo usuario e apresente esse vetor ordenado (crescente). Faca uma versao com o metodo de ordenacao por selecao.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(void) {
  int vetor[TAM],min,max;

  puts("INTERVALO:");
  printf("Valor mínimo: ");
  scanf("%d",&min);
  printf("Valor máximo: ");
  scanf("%d",&max);

  puts("\nVetor:");
  srand(time(NULL));
  for(int i=0; i<TAM; i++){
    vetor[i] = min+(rand()%(max-min+1));
    printf("%d ",vetor[i]);
  }

  for(int i=0; i<TAM-1; i++){
    for(int j=i+1; j<TAM; j++){
      if(vetor[i]>vetor[j]){
        vetor[i]^=vetor[j];
        vetor[j]^=vetor[i];
        vetor[i]^=vetor[j];
      }
    }
  }

  puts("\n\nVetror ordenado (por selecao):");
  for(int i=0; i<TAM; i++){
    printf("%d ",vetor[i]);
  }
  
  return 0;
}