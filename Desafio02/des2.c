//Armazenar em um vetor os enderecos de todas as ocorrencias de X (fornecido por linha de comando) em um vetor Y pseudo aleatorio. Se Y não tiver X, o vetor de endereços deve ser NULL.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 10

void prencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void ocorrencia(int, int *, int **, int, int);

int main(int argc, char *argv[]){
  int x, *y=NULL, **c=NULL;

  if(argc!=3){
    printf("Use \n\t\t %s <ElementoX> <qtdElementosVetorY>\n\n",argv[0]);
    exit(1);
  }

  x = atoi(argv[1]);
  int qtdy = atoi(argv[2]);
  
  if(!(y = (int *) malloc(qtdy*sizeof(int)))){
    puts("Não há memória. Tente outra vez!");
    exit(2);
  }

  prencherVetor(y, qtdy, INI, MX);
  printf("Vetor:");
  imprimirVetor(y, qtdy);

  int qtdc=0;
  
  for(int i=0; i<qtdy; i++){
    if(x == *(y+i)){
      qtdc++;
    }
  }

  if(qtdc==0){
    printf("\nOcorrências de %d no vetor:\nNULL",x);
    exit(3);
  }

  if((!(c = (int **) malloc(qtdc*sizeof(int))))){
    puts("Não há memória. Tente outra vez!");
    exit(4);
  }
  
  ocorrencia(x, y, c, qtdy, qtdc);
  
  return 0;
}

void prencherVetor(int *pd, int qtd, int inicial, int qtFaixa){
  srand(time(NULL));
  for(int i=0; i<qtd; i++){
    *(pd+i) = inicial + rand() % qtFaixa;
  }
}

void imprimirVetor(int *pv, int qt){
  for (int k=0; k<qt; k++){
    printf("\n[%p] %d",pv+k, *(pv+k));
  }
  puts("");
}

void ocorrencia(int n, int *pin, int **pout, int qtdin, int qtdout){
  int k=0;
  for(int i=0; i<qtdin; i++){
    if(n == *(pin+i)){
      *(pout+k) = pin+i;
      k++;
    }
  }

  printf("\nOcorrências de %d no vetor:",n);
  for (int k=0; k<qtdout; k++){
    printf("\n[%p] [%p] %d",pout+k, *(pout+k), **(pout+k));
  }
  puts("");
}