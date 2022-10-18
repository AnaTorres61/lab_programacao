//Escreva um programa que leia um vetor do usuario e imprima seus valores e seus enderecos. Teste o vetor com tipos de dados diferentes, analise os enderecos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void receberVetor(float *, unsigned int);
void imprimirVetor(float *, unsigned int);

int main(){
  float *v=NULL;
  unsigned int tam;

  puts("Tamanho do vetor: ");
  scanf("%d",&tam);

  v = malloc(tam*sizeof(float));
  if(!v){
    puts("Erro. Tente um tamanho diferentes");
    exit(1);
  }

  receberVetor(v,tam);
  imprimirVetor(v, tam);

  free(v);

  return 0;
}

void imprimirVetor(float *pv, unsigned int qt){
  for (int k=0; k<qt; k++){
    printf("\n[%p] %.2f",pv+k, *(pv+k));
  }
}

void receberVetor(float *pv, unsigned int qt){
  for (int k=0; k<qt; k++){
    printf("\nv[%d] = ",k);
    scanf("%f",(pv+k));
  }
}