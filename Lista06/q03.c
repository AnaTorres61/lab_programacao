//Escreva um programa em C que gere um vetor com numeros aleatorios e calcule sua media. Organize uma Estrutura com as seguintes informacoes: ponteiro para a matriz, quantidade de elementos e a media.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 9

int numAleatorio(int, int);
void gerarVetor(int *, int, int (*)(), int, int);
float calMedia(int *, int);
void imprimirVetor(int *, int);

typedef int (*pFunc)();

struct matriz{
  int *p;
  int qtd;
  float media;
};

int main(){
  int *vetor=NULL, qtd;
  float media;
  
  srand(time(NULL));

  struct matriz mat;

  qtd = numAleatorio(INI, 10);

  if(!(vetor=(int *) malloc(qtd*sizeof(int)))){
    puts("Memória Insuficiente!");
    exit(1);
  }

  pFunc pNumAleatorio  = numAleatorio;
  gerarVetor(vetor, qtd, pNumAleatorio, INI, MX);

  media = calMedia(vetor, qtd);

  mat.p = vetor;
  mat.qtd = qtd;
  mat.media = media;

  imprimirVetor(mat.p,mat.qtd);
  printf("\n%p\n%d\n%.2f\n",mat.p, mat.qtd, mat.media);
  
  free(vetor);
  return 0;
}

int numAleatorio(int ini, int max){
  return ini + rand() % (max+1);
}

void gerarVetor(int *p, int qtd, int (*pF)(), int ini, int mx){
  for(int i=0; i<qtd; i++){
    *(p+i) = (*pF)(ini,mx);
  }
}

float calMedia(int *p, int qtd){
  float soma=0;
  for(int i=0; i<qtd; i++){
    soma += *(p+i);
  }
  return soma/qtd;
}

void imprimirVetor(int *p, int qt){
  for (int k=0; k<qt; k++){
    printf("%d ", *(p+k));
  }
  puts("");
}