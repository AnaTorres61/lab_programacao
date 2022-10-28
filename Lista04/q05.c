//Programa que encontra o tamanho de uma string fornecida usando ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30

void tamanho(char *);

int main(){
  char str[TAM];

  puts("Digite um string:");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = 0; //tirar ENTER

  tamanho(str);
  
  return 0;
}

void tamanho(char *string){
  printf("Tamanho da string = %lu\n", strlen(string));
}