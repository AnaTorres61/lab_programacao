//Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuario, e sua media.

#include <stdio.h>
#include <stdlib.h>

float media(float, float);

struct aluno{
  float nota1;
  float nota2;
  float media;
};

int main(){
  struct aluno aluno1;
  
  printf("Digite a primeira nota: ");
  scanf("%f",&aluno1.nota1);
  printf("Digite a segunda nota: ");
  scanf("%f",&aluno1.nota2);

  aluno1.media = media(aluno1.nota1, aluno1.nota2);

  printf("\nMédia = %.2f",aluno1.media);

  return 0;
}

float media(float n1, float n2){
  return (n1 + n2)/2;
}