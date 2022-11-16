//Escreva um programa que gere dois vetores (X e Y ) com numeros pseudoaleatorios no intervalo [0,N − 1]. Crie uma matriz M com dimensoes NxN que armazene as coocorrencias dos elementos de X e Y.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *pv, int qtd, int inicial, int qtFaixa);
void imprimirVetor(int *pv, int qtd);
void gerarMatriz(int *m, int qtd, int *x, int *y);
void imprimirMatriz(int *pv, int qtd);

int main(int argc, char **argv){
  srand(time(NULL));
  int *x=NULL, *y=NULL, *m=NULL;

  if(argc != 2){
    printf("Formato:\t%s <tamanhoVetor>",*argv);
    exit(1);
  }

  int qtd = atoi(argv[1]);
  
  if(!(x=(int*)malloc(qtd*sizeof(int))) || !(y=(int*)malloc(qtd*sizeof(int)))){
    puts("Memória Insuficiente");
    exit(2);
  }

  if(!(m=(int*)calloc(qtd*qtd,sizeof(int)))){
    puts("Memória Insuficiente");
    exit(3);
  }

  gerarVetor(x, qtd, 0, qtd-1);
  gerarVetor(y, qtd, 0, qtd-1);

  imprimirVetor(x, qtd);
  puts("");
  imprimirVetor(y, qtd);

  puts("");
  gerarMatriz(m, qtd, x, y);
  imprimirMatriz(m, qtd);

  return 0;
}

void gerarVetor(int *pv, int qtd, int inicial, int qtFaixa){
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

void gerarMatriz(int *m, int qtd, int *x, int *y){
  int elem=0,c=0,l=0;
  do{
    for(int i=0; i<qtd; i++){
      if(*(x+i)==c && *(y+i)==l){
        *(m+elem)+=1;
      }
    }
    if(c==(qtd-1)){
      c=0;
      l++;
    }else c++;
    elem++;
  }while(elem<qtd*qtd);
}

void imprimirMatriz(int *pv, int qtd){
  int cont=0;
  puts("");
  for (int k=0; k<(qtd*qtd); k++){
    printf("%d ", *(pv+k));
    if(cont==(qtd-1)){
      cont=0;
      puts("");
    } else cont++;
  }
}