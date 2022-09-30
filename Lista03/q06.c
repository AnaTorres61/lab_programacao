//Faca um programa em C que leia uma string do usuario e a apresente na forma inversa.

#include <stdio.h>
#include <string.h>

#define TAM 20

int main(void) {
  char str[TAM];

  puts("Entre com uma string:");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = 0; //remover o enter da string

  puts("\nIvertido:");
  for(int i=strlen(str); i>=0; i--){
    printf("%c",str[i]);
  }
  
  return 0;
}