//Faca um programa em C que leia uma string e um caractere do usuario e informe se a string de entrada contem o caracter fornecido.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 31

int main(void) {
  char str[TAM],c;
  int contem=0;
    
  puts("Entre com uma string:");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = 0; //remover o enter da string
  puts("Entre com um caractere:");
  c=getchar();

  for(int i=0; i<TAM; i++){
    if(str[i]==c){
      contem=1;
      break;
    }
  }

  (contem) ? printf("\nA string (%s) CONTÉM o caractere %c",str,c) : printf("\nA string (%s) NÃO CONTÉM o caractere %c",str,c);
  
  return 0;
}