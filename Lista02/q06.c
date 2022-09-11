/*Escreva um programa que transforme o computador numa urna eletronica para eleicao para presidente de um certo paıs, as quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo numero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos ja citados e considerado nulo; em qualquer situacao, o eleitor deve ser consultado quanto a confirmacao do seu voto. No final da eleicao o programa deve emitir um relatorio contendo as porcentagens de votacao de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O codigo para finalizar a urna (votacao) e o usuario digitar algum numero negativo.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

short int paulo=0,renato=0,branco=0,nulo=0,eleitores=0;

void conferir(short int voto){
  system("clear");
  puts("\nCONFIRA O SEU VOTO\n");
  switch(voto){
    case 5:
      puts("Número: 5");
      puts("Nome: Paulo");
      break;
    case 7:
      puts("Número: 7");
      puts("Nome: Renato");
      break;
    case 0:
      puts("VOTO EM BRANCO");
      break;
    default:
      puts("VOTO NULO");
      break;
  }
}

int confirmar(){
  char conf;
  puts("______________________________________");
  puts("Digite:");
  puts("C para COMFIRMAR este voto");
  puts("R para CORRIGIR/REINICIAR este voto");
  scanf(" %c",&conf);
  conf = (conf=='C') ? 1 : 0;
  return conf;
}

void contagem(short int voto){
  eleitores++;
  switch(voto){
    case 5:
      paulo++;
      break;
    case 7:
      renato++;
      break;
    case 0:
      branco++;
      break;
    default:
      nulo++;
      break;
  }
}

void relatorio(){
  system("clear");
  puts("RELATORIO\n");
  printf("Paulo  %.1f%%\n",paulo*100/(float)eleitores);
  printf("Renato %.1f%%\n",renato*100/(float)eleitores);
  printf("Branco %.1f%%\n",branco*100/(float)eleitores);
  printf("Nulo   %.1f%%\n\n",nulo*100/(float)eleitores);

  (paulo!=renato) ? (paulo>renato) ? puts("ELEITO: Paulo") : puts("ELEITO: Renato") : (paulo) ? puts("EMPATE") : puts("NINGUÉM FOI ELEITO");
}

int main(){
  short int voto;
  do{
    system("clear");
    puts("INÍCIO DA VOTAÇÃO");
    sleep(1);
    system("clear");
    puts("Presidente");
    scanf("%hi",&voto);
    if(voto<0) break;
    conferir(voto);
    if(!confirmar()) continue;
    contagem(voto);
    system("clear");
    puts("FIM");
    sleep(1);
  }while(1);
  relatorio();
  return 0;
}