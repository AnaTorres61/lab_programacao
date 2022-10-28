//Implemente o metodo de ordenacao bolha utilizando ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define INI 0
#define MX 100

void gerarVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void ordenaBolha(int *, int);

int main(void) {
  int vetor[TAM];

  puts("Vetor: ");

  gerarVetor(vetor,TAM,INI,MX);
  imprimirVetor(vetor,TAM);
  
  puts("\n\nVetror ordenado (metodo bolha):");

  ordenaBolha(vetor,TAM);

  imprimirVetor(vetor,TAM);
  
  return 0;
}

void gerarVetor(int *pd, int qtd, int inicial, int qtFaixa){
  srand(time(NULL));
  for(int i=0; i<qtd; i++){
    *(pd+i) = inicial + rand() % qtFaixa;
    }
}

void imprimirVetor(int *pv, int qt){
  for (int k=0; k<qt; k++){
    printf("%d ", *(pv+k));
  }
}

void ordenaBolha(int *pv, int qtd){
  int ordenado;
  do{
    ordenado=0;
    for(int j=0; j<qtd-1; j++){
      if(*(pv+j)>*(pv+(j+1))){
        *(pv+j)^=*(pv+(j+1));
        *(pv+(j+1))^=*(pv+j);
        *(pv+j)^=*(pv+(j+1));
      ordenado = 1;
      }
    }
  }while(ordenado);
}