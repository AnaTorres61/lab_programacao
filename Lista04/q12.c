//Reimplemente a questao 11 considerando que o vetor Y e dado em funcao de X da seguinte forma: 
/*
yi = xi if 0 < r ≤ 3
     xi − 1 if 3 < r ≤ 5
     xi + 1 if 5 < r ≤ 7
     xi − 2 if 8 < r ≤ 9
     xi + 2 if 9 < r ≤ 10
*/
//onde r e um numero pseudoaleatorio, xi e yi correspondem ao i-esimo elemento do vetor X e Y , respectivamente. Considere os valores limites definidos na questao anterior para yi, caso o valor obtido a partir de xi esteja fora da faixa.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarX(int *pv, int qtd, int inicial, int qtFaixa);
void gerarY(int *x, int *y, int qtd, int inicial, int qtFaixa);
void imprimirVetor(int *pv, int qtd);
void gerarMatriz(int *m, int qtd, int *x, int *y);
void imprimirMatriz(int *pv, int qtd);

int main(int argc, char **argv){
  srand(time(NULL));
  int *x=NULL, *y=NULL, *m=NULL;

  if(argc != 2){
    printf("Formato:\t%s <tamanhoVetor>",*argv);
    exit(1);
  }

  int qtd = atoi(argv[1]);
  
  if(!(x=(int*)malloc(qtd*sizeof(int))) || !(y=(int*)malloc(qtd*sizeof(int)))){
    puts("Memória Insuficiente");
    exit(2);
  }

  if(!(m=(int*)calloc(qtd*qtd,sizeof(int)))){
    puts("Memória Insuficiente");
    exit(3);
  }

  gerarX(x, qtd, 0, qtd);
  gerarY(x, y, qtd, 0, qtd);

  imprimirVetor(x, qtd);
  puts("");
  imprimirVetor(y, qtd);
  puts("");
  
  gerarMatriz(m, qtd, x, y);
  imprimirMatriz(m, qtd);

  return 0;
}

void gerarX(int *pv, int qtd, int inicial, int qtFaixa){
  for(int i=0; i<qtd; i++){
    *(pv+i) = inicial + rand() % qtFaixa;
  }
}

void gerarY(int *x, int *y, int qtd, int inicial, int qtFaixa){
  int r;
  for(int i=0; i<qtd; i++){
    do{
      r = rand() % 11;
      printf("%d ",r);
      if(r>0 && r<=3) *(y+i) = *(x+i);
      else if(r>3 && r<=5) *(y+i) = *(x+i)-1;
      else if(r>5 && r<=7) *(y+i) = *(x+i)+1;
      else if(r>8 && r<=9) *(y+i) = *(x+i)-2;
      else if(r>9 && r<=10) *(y+i) = *(x+i)+2;
    }while(*(y+i)<inicial || *(y+i)>=qtFaixa);
  }
}

void imprimirVetor(int *pv, int qtd){
  puts("");
  for (int k=0; k<qtd; k++){
    printf("%d ", *(pv+k));
  }
}

void gerarMatriz(int *m, int qtd, int *x, int *y){
  int elem=0,c=0,l=0;
  do{
    for(int i=0; i<qtd; i++){
      if(*(x+i)==c && *(y+i)==l){
        *(m+elem)+=1;
      }
    }
    if(c==(qtd-1)){
      c=0;
      l++;
    }else c++;
    elem++;
  }while(elem<qtd*qtd);
}

void imprimirMatriz(int *pv, int qtd){
  int cont=0;
  puts("");
  for (int k=0; k<(qtd*qtd); k++){
    printf("%d ", *(pv+k));
    if(cont==(qtd-1)){
      cont=0;
      puts("");
    } else cont++;
  }
}