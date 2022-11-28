//Escreva um programa em C que modifique a Questao 1 para conter um array com 3 alunos. Escreva uma funcao para calcular a media dos alunos.

#include <stdio.h>
#include <stdlib.h>

#define QTD 3

void pedirNotas(float *, float *);
float media(float, float);

struct aluno{
  float nota1;
  float nota2;
  float media;
};

int main(){
  struct aluno aluno[QTD];

  for(int i=0; i<QTD; i++){
    printf("\nAluno[%d]:\n",i);
    pedirNotas(&aluno[i].nota1, &aluno[i].nota2);
  }

  for(int i=0; i<QTD; i++){
    aluno[i].media = media(aluno[i].nota1, aluno[i].nota2);
  }

  for(int i=0; i<QTD; i++){
    printf("\nAluno[%d]\nN1 = %.2f\nN2 = %.2f\nMédia = %.2f\n",i,aluno[i].nota1,aluno[i].nota2,aluno[i].media);
  }

  return 0;
}

void pedirNotas(float *nota1, float *nota2){
  printf("Digite a primeira nota: ");
  scanf("%f",nota1);
  printf("Digite a segunda nota: ");
  scanf("%f",nota2);
}

float media(float n1, float n2){
  return (n1 + n2)/2;
}