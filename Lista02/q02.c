/*Implemente um programa que tenha como entrada um numero (1-7) que corresponde a um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terca, quarta, quinta, sexta, sabado). Se o numero lido nao estiver no intervalo 1-7, imprima: “Numero de dia nao valido”. O programa deve permanecer executando ate que o usuario tecle o numero 0. (Utilize obrigatoriamente teste no final).*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  short int x;
  do{
    puts("Digite o número do dia da semana: ");
    scanf("%hi",&x);
    switch(x){
      case 0:
      system("clear");
      printf("Programa finalizado!\n");
      break;
      case 1:
      puts("Domingo\n");
      break;
      case 2:
      puts("Segunda\n");
      break;
      case 3:
      puts("Terça\n");
      break;
      case 4:
      puts("Quarta\n");
      break;
      case 5:
      puts("Quinta\n");
      break;
      case 6:
      puts("Sexta\n");
      break;
      case 7:
      puts("Sábado\n");
      break;
      default:
      puts("Número de dia não válido!\n");
      break;
    }
  }while(x);
  return 0;
}