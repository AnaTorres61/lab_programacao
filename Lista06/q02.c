//Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o nomePeca, um numero inteiro para identificar o numero da peca, o preco em ponto flutuante e um elemento inteiro para identificar o numero do pedido.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMNOMEPECA 30

struct estoque{
  char nomePeca[TAMNOMEPECA];
  int numPeca;
  float valorPeca;
  int numPedido;
};

int main(){
  struct estoque estoque1;

  puts("********ESTOQUE*********\n");
  printf("Nome da peça: ");
  fgets(estoque1.nomePeca,TAMNOMEPECA,stdin);
  estoque1.nomePeca[strcspn(estoque1.nomePeca, "\n")] = 0;
  printf("Numero da peça: ");
  scanf("%d",&estoque1.numPeca);
  printf("Valor da peça: ");
  scanf("%f",&estoque1.valorPeca);
  printf("Numero do pedido: ");
  scanf("%d",&estoque1.numPedido);

  //printf("\n%s\n%d\n%.2f\n%d",estoque1.nomePeca, estoque1.numPeca, estoque1.valorPeca, estoque1.numPedido);
  return 0;
}


/////// usar vetor vs usar nós separados
///////alocacao dinamica vetor struct??????