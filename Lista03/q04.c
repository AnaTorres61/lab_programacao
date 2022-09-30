//Faca um programa em C que leia duas strings do usuario e informe se elas sao iguais. Faca uma versao com o uso da funcao strcmp() e outra sem.

#include <stdio.h>
#include <string.h>

#define TAM 30

int comparationWithStrcmp(char str1[], char str2[]);
int comparationWhithoutStrcmp(char str1[], char str2[], int tam);
void printResult(int comparation);

int main(void) {
  char str1[TAM],str2[TAM];

  puts("Entre com uma string:");
  fgets(str1, TAM, stdin);
  str1[strcspn(str1, "\n")] = 0; //remover o enter da string
  puts("Entre com outra string:");
  fgets(str2, TAM, stdin);
  str2[strcspn(str2, "\n")] = 0;
  
  puts("\nCom Strcmp");
  printResult(comparationWithStrcmp(str1, str2));
  puts("\nSem Strcmp");
  printResult(comparationWhithoutStrcmp(str1, str2, TAM));
  
  return 0;
}

int comparationWithStrcmp(char str1[], char str2[]){
  return strcmp(str1,str2);
}

int comparationWhithoutStrcmp(char str1[], char str2[], int tam){
  if(strlen(str1)!=strlen(str2)) return 1;
  for(int i=0; i<strlen(str1); i++){
      if(str1[i]!=str2[i]) return 1;
  }
  return 0;
}

void printResult(int comparation){
  (comparation)?puts("Diferentes!"):puts("Iguais!");
}