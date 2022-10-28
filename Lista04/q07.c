//Escreva um programa que concatene duas strings utilizando ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

void concatena(char *, char *);

int main(){
  char str1[2*TAM],str2[TAM];

  puts("Digite uma string:");
  fgets(str1, TAM, stdin);
  str1[strcspn(str1, "\n")] = 0; //tirar ENTER

  puts("Digite outra string:");
  fgets(str2, TAM, stdin);
  str2[strcspn(str2, "\n")] = 0; //tirar ENTER

  concatena(str1,str2);

  printf("\n%s\n", str1);

  return 0;
}

void concatena(char *string1, char *string2){
  strcat(string1, string2);
}