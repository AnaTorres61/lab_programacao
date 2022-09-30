//Faca um programa em C que gere um vetor com 100 numeros inteiros pseudoaleatorios no intervalo definido pelo usuario e apresente esse vetor ordenado (crescente). Faca uma versao com o metodo bolha (bubble sort).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(void) {
  int vetor[TAM],min,max;

  puts("INTERVALO:");
  printf("Valor mínimo: ");
  scanf("%d",&min);
  printf("\nValor máximo: ");
  scanf("%d",&max);

  printf("Vetor: ");
  srand(time(NULL));
  for(int i=0; i<TAM; i++){
    vetor[i] = min+(rand()%(max-min+1));
    printf("%d ",vetor[i]);
  }

  puts("\n\nVetror ordenado (metodo bolha):");
  int ordenado;
  do{
    ordenado=0;
    for(int j=0; j<TAM-1; j++){
      if(vetor[j]>vetor[j+1]){
        vetor[j]^=vetor[j+1];
        vetor[j+1]^=vetor[j];
        vetor[j]^=vetor[j+1];
      ordenado = 1;
      }
    }
  }while(ordenado);

  for(int i=0; i<TAM; i++){
    printf("%d ",vetor[i]);
  }
  
  return 0;
}