//Faca um programa em C que concatene duas strings recebidas pelo usuario. Construa uma versao com uso da funcao strcat() e outra sem.

#include <stdio.h>
#include <string.h>

#define TAMSTR 20
#define TAMCONC 40

char* concatenateWithoutStrcat(char s1[],char s2[],char strconc[]);

int main(void) {
  char str1[TAMCONC],str2[TAMSTR],strconc[TAMCONC];

  puts("Entre com uma string:");
  fgets(str1, TAMSTR, stdin);
  str1[strcspn(str1, "\n")] = 0; //remover o enter da string
  puts("Entre com outra string:");
  fgets(str2, TAMSTR, stdin);
  str2[strcspn(str2, "\n")] = 0;

  puts("\nSem strcat()");
  printf("%s",concatenateWithoutStrcat(str1,str2,strconc)); //altera strconc
  puts("\nCom strcat()");
  printf("%s",strcat(str1,str2)); //altera str1
  
  return 0;
}

char* concatenateWithoutStrcat(char s1[],char s2[],char strconc[]){
  int i = 0, j = 0;
  while (s1[i] != '\0') {
      strconc[j] = s1[i];
      i++;
      j++;
  }
  i = 0;
  while (s2[i] != '\0') {
      strconc[j] = s2[i];
      i++;
      j++;
  }
  strconc[j] ='\0';
  
  return strconc;
}