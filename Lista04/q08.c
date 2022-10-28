//Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.

#include <stdio.h>
#include <string.h>

#define TAM 31

void procurarCaractere(char *, int, char);

int main(void) {
  char str[TAM],c;
  int contem=0;
    
  puts("Entre com uma string:");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = 0; //remover o enter da string
  puts("Entre com um caractere:");
  c=getchar();

  procurarCaractere(str,TAM,c);
  
  return 0;
}

void procurarCaractere(char *str, int qtd, char c){
  int contem=0;
  
  for(int i=0; i<qtd; i++){
    if(*(str+i)==c){
      printf("\n%dº caractere",i+1);
      printf("\n[%p] %c\n",(str+i),*(str+i));
    }
  }
}