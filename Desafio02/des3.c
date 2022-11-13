//Organize um vetor de endereços que organiza os elementos de um vetor X em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 10

void prencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void ordenaVetor(int *, int **, int);

int main(int argc, char *argv[]){
  int *vIn=NULL, **vOut=NULL;

  if(argc!=2){
    printf("Use \n\t\t %s <ElementoX>\n\n",argv[0]);
    exit(1);
  }

  int qtd = atoi(argv[1]);
  
  if((!(vIn = (int *) malloc(qtd*sizeof(int))))){
    puts("Não há memória. Tente outra vez!");
    exit(2);
  }

  vOut = (int **) malloc((1)*sizeof(int*));
  if((!(*vOut = (int *) malloc((qtd)*sizeof(int))))){
    puts("Não há memória. Tente outra vez!");
    exit(2);
  }

  prencherVetor(vIn, qtd, INI, MX);
  printf("Vetor:");
  imprimirVetor(vIn, qtd);
  
  puts("\nVetor ordenado:");
  ordenaVetor(vIn, vOut, qtd);

  free(vIn);
  free(vOut);

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

void ordenaVetor(int *pIn, int **pOut, int qtd){
  for(int i=0; i<qtd; i++){
    *(pOut+i) = (pIn+i);
  }
  
  int ordenado;
  do{
    ordenado=0;
    for(int j=0; j<qtd-1; j++){
      if(**(pOut+j)>**(pOut+(j+1))){
        int *aux;
        aux = *(pOut+(j+1));
        *(pOut+(j+1)) = *(pOut+j);
        *(pOut+j) = aux;
        ordenado = 1;
      }
    }
  }while(ordenado);

  for (int k=0; k<qtd; k++){
    printf("\n[%p] %d", *(pOut+k), **(pOut+k));
  }
  puts("");
}