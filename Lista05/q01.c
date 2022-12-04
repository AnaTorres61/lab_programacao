//Escreva um programa que receba dois valores por linha de execucao e realize a soma ou multiplicacao, conforme um codigo de operacao tambem recebido por linha de execucao.

#include <stdio.h>
#include <stdlib.h>

float soma(float, float);
float multiplicacao(float, float);
float operacao(float (*)(float, float), float, float);

typedef float (*Func)(float, float);

int main(int argc, char **argv) {
  if(argc!=4){
    printf("Uso:\n\t %s <valor1> <valor2> <operacao>\n\n",*argv);
    exit(1);
  }

  float n1 = atof(argv[1]);
  float n2 = atof(argv[2]);
  int op = atoi(argv[3]);


  if((op<0) || (op>1)){
    puts("Operação não implementada");
    exit(2);
  }
  
  Func v[]={soma,multiplicacao};

  printf("\nResultado: %.2f",operacao(v[op],n1,n2));
  
  return 0;  
}

float soma(float x, float y){
  return x+y;
}

float multiplicacao(float x, float y){
  return x*y;
}

float operacao(float (*pF)(float, float), float x, float y){
  return (*pF)(x,y);
}