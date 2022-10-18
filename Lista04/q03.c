//Escreva um programa que solicite iterativamente um numero do usuario e imprima sempre o menor valor fornecido. Crie um criterio para finalizacao do programa. Utilize ponteiros.

#include <stdio.h>

void menor(int *, int);

int main(){
  int num, *p=&num;
  while(1){
    int dig;
    puts("\nDigite um número:");
    puts("OBS: 0 para sair");
    scanf("%d",&dig);
    
    if(dig==0){
      break;
    }else{
      menor(p,dig);
    }
  }

  printf("\n\nMenor número digitado é %d",num);
  return 0;
}

void menor(int *p, int num){
  *p = (num<*p)? num: *p;
}