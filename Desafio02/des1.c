//alocar tres vetores dinamicamente A e B aleatorios e C interseção de A e B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 100

void prencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);
int qtdRept(int , int *);
void tirarRepetidos(int *, int , int *);
int qtdVetor3(int *, int *, int , int);
void intersecao(int *, int *, int *, int , int);

int main(int argc, char *argv[]) {

  srand(time(NULL)); //semente

  //DECLARAR PONTEIROS
  int *pv1 = NULL, *pv2 = NULL, *pv3=NULL;
  int *p1=NULL, *p2=NULL;

  //VERIFICAR ENTRADA
  if(argc!=3){
    printf("Use \n\t\t %s <qtdElementosVetor1> <qtdElementosVetor2>\n\n",argv[0]);
    exit(1);
  }

  //ALOCAR VETORES
  int qtdv1 = atoi(argv[1]);
  int qtdv2 = atoi(argv[2]);
  
  if((!(pv1 = (int *) malloc(qtdv1*sizeof(int)))) || (!(pv2 = (int *) malloc(qtdv2*sizeof(int))))){
    puts("Não há memória. Tente outra vez!");
    exit(2);
  }

  //PREENCHER VETORES
  prencherVetor(pv1,qtdv1,INI,MX);
  prencherVetor(pv2,qtdv2,INI,MX);

  //IMPRIMIR VETORES
  imprimirVetor(pv1,qtdv1);
  puts("");
  imprimirVetor(pv2,qtdv2);
  puts("");

  //ALOCAR VETORES (SEM REPETIÇÕES)
  int qtd1 = qtdv1 - qtdRept(qtdv1,pv1);
  int qtd2 = qtdv2 - qtdRept(qtdv2,pv2);

  if((!(p1 = (int *) malloc(qtd1*sizeof(int)))) || (!(p2 = (int *) malloc(qtd2*sizeof(int))))){
    puts("Não há memória. Tente outra vez!");
    exit(3);
  }
  
  //PREENCHER VETOR (SEM REPETIÇÕES)
  tirarRepetidos(pv1,qtdv1,p1);
  tirarRepetidos(pv2,qtdv2,p2);

  free(pv1);
  free(pv2);

  //ALOCAR VETOR (INTERSEÇÃO)
  int qtd3 = qtdVetor3(p1, p2, qtd1, qtd2);

  if(qtd3 == 0){
    puts("");
    printf("Não existe interseção"); //0 repetiçoes --> 0 interseção
    exit(0);
  }

  if(!(pv3 = (int *) malloc(qtd3*sizeof(int)))){
    puts("Não há memória. Tente outra vez!");
    exit(4);
  }
  
  //PREENCHER VETOR (INTERSEÇÃO)
  intersecao(p1,p2,pv3,qtd1,qtd2);
  
  imprimirVetor(pv3,qtd3);
  
  free(p1);
  free(p2);
  free(pv3);
  
  return 0;
}

void prencherVetor(int *pd, int qtd, int inicial, int qtFaixa){
  for(int i=0; i<qtd; i++){
    *(pd+i) = inicial + rand() % qtFaixa;
  }
}

void imprimirVetor(int *pv, int qt){
  for (int k=0; k<qt; k++){
    printf("\n[%p] %d",pv+k, *(pv+k));
  }
}

int qtdRept(int qtd, int *pv){
  int rept=0;
  for(int i=0; i<qtd; i++){
		for(int j = i+1; j<qtd; j++){
			if(*(pv+i) == *(pv+j)) {
				rept++;
        break;
			}
    }
	}
  
  return rept;
}

void tirarRepetidos(int *pin, int qtd, int *pout){
  int rept, k=0;
  for(int i=0; i<(qtd-1); i++){
	  rept = 0;
		for(int j = i+1; j<qtd; j++){
			if(*(pin+i) == *(pin+j)) {
				rept = 1;
				break;
			}
		}
		if (!rept) {
		  *(pout+k) = *(pin+i);
		  k++;
		}
	}
}

int qtdVetor3(int *p1, int *p2, int qtd1, int qtd2){
  int qtd3=0;
  
  for(int i=0; i<qtd1; i++){
    for(int k=0; k<qtd2; k++){
      if(*(p1+i) == *(p2+k)){
        qtd3++;
      }
    }
  }

  return qtd3;
}

void intersecao(int *p1, int *p2, int *p3, int qtd1, int qtd2){
  int l=0, rept;
  
  for(int i=0; i<qtd1; i++){
    for(int j=0; j<qtd2; j++){
      rept=0;
      if(*(p1+i) == *(p2+j)){
        for(int k=l; k>=0; k--){
          if(*(p1+i) == *(p3+k)) rept=1;
        }
        if(!rept){
          *(p3+l) = *(p1+i);
          l++;
        }
      }
    }
  }
}