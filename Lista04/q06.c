//Escreva um programa que copie uma string para outra usando ponteiros.

#include <stdio.h>
#include <string.h>

void copiaString(char *, char *);

int main(){
  int tam;
  char str1[]="Isso é uma string";
  char str2[20];

  copiaString(str1,str2);

  printf("%s",str2);

  return 0;
}

void copiaString(char *string1, char *string2){
  int i=0;
  while(1){
    *(string2+i) = *(string1+i);
    i++;
    if(*(string1+i)=='\0'){
      *(string2+i) ='\0';
      break;
    }
  }
}