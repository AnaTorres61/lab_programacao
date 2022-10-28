//Um programa que gera um vetor X com numeros pseudoaleatorios no intervalo [0,N − 1]. Crie um vetor F com N posicoes e armazene em cada posicao de F a quantidade de ocorrencias dos elementos de X.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void gerarVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void gerarVetorOcorrencia(int *, int, int, int *);

int main(){
  int X[TAM], *F=NULL, n;

  printf("Vetor no intervalo de 0 a ");
  scanf("%d",&n);
  n++;

  gerarVetor(X, TAM, 0, n);
  imprimirVetor(X, TAM);
  
  if(!(F = (int *) calloc(n,sizeof(int)))){
    puts("Não há memória. Tente outra vez!");
    exit(1);
  }

  gerarVetorOcorrencia(X, TAM, n, F);
  imprimirVetor(F, n);

  return 0;
}

void gerarVetor(int *pv, int qtd, int inicial, int qtFaixa){
  srand(time(NULL));
  for(int i=0; i<qtd; i++){
    *(pv+i) = inicial + rand() % qtFaixa;
    }
}

void imprimirVetor(int *pv, int qtd){
  puts("");
  for (int k=0; k<qtd; k++){
    printf("%d ", *(pv+k));
  }
}

void gerarVetorOcorrencia(int *pin, int qtd, int n, int *pout){
  for(int i=0; i<n; i++){
    for(int j=0; j<qtd; j++){
      *(pout+i) = (*(pin+j)==i) ? *(pout+i)+1 : *(pout+i);
    }
  }
}