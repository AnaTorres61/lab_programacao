// SISTEMA PARA GERENCIAR ARMARIOS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include "funcoes.h"

#define MAX 8

int main(void) {
  unsigned char opc,armarios=0;

  do{
    sleep(1);
    system("clear");
    opc=menu(armarios);
    
    switch(opc){
      case 1:
        armarios=ocuparArmario(armarios);
        break;
      case 2:
        armarios=liberarArmario(armarios);
        break;
      case 3:
        puts("\nPROGRAMA FINALIZADO!");
        break;
      default:
        puts("\nOPÇÃO INVÁLIDA!");
        break;
    }
  }while(opc!=3);

  return 0;
}

unsigned char menu(unsigned char armarios){
  unsigned char opc;
  locacao(armarios);
  puts("---------------------------------------------");
  puts("\nGERENCIADOR DE ARMÁRIOS\n");
  puts("(1) Ocupar armário");
  puts("(2) Liberar armário");
  puts("(3) Sair");
  printf("\nDigite uma opção: ");
  scanf("%hhu",&opc);

  return opc;
}

void locacao(unsigned char armarios){
  puts("Armários ocupados:");
  for(unsigned char i=0; i<MAX; i++){
    if((armarios>>i)&1) printf("%d ",i);
  }
  puts("\nArmários livres:");
  for(unsigned char i=0; i<MAX; i++){
    if(!((armarios>>i)&1)) printf("%d ",i);
  }
  puts("");
}

unsigned char ocuparArmario(unsigned char armarios){
  if(armarios==0xff) puts("\nTODOS OS ARMÁRIOS ESTÃO OCUPADOS!");
  else{
    unsigned char id;
    srand(time(NULL));
    do{
      id = rand() % MAX;
    }while((armarios>>id)&1);
    armarios = armarios|(int)pow(2,id);
    printf("\nARMÁRIO %d OCUPADO!\n",id);
  }

  return armarios;
}

unsigned char liberarArmario(unsigned char armarios){
  unsigned char id;
  printf("Qual a posição do armário a ser desocupado: ");
  scanf("%hhu",&id);
  if(id<0 || id>(MAX-1)) puts("\nPOSIÇÃO INVÁLIDA!");
  else{
    if(!((armarios>>id)&1)) puts("\nARMÁRIO JÁ DESOCUPADO!");
    else{
      unsigned char x=pow(2,id);
      armarios = armarios&~x;
      printf("\nARMÁRIO %d DESOCUPADO!\n",id);
    }
  }

  return armarios;
}