//Faca um programa em C que leia uma string do usuario e informe a quantidade de caracteres da string fornecida. Nao use a funcao strlen().

#include <stdio.h>
#include <string.h>

#define TAM 30

int main(void) {
  char str[TAM];
  int cont=0;

  puts("Entre com uma string:");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = 0; //remover o enter da string

  for(int i=0;i<TAM;i++){
    if(str[i]!='\0') cont++;
    else break;
  }

  printf("\nQuantidade de caracteres = %d",cont);
  return 0;
}