/*Para que a divisao entre 2 numeros possa ser realizada, o divisor nao pode ser nulo (zero). Escreva um programa para ler 2 valores e imprimir o resultado da divisao do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que nao deve ser nulo). Enquanto for fornecido um valor nulo a leitura deve ser repetida.*/

#include <stdio.h>

int main(){
  float n1,n2;
  puts("DIGITE UM NUMERO:");
  scanf("%f",&n1);
  do{
    puts("DIGITE OUTRO NUMERO(NAO NULO):");
    scanf("%f",&n2);
  }while(n2==0);
  printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);  

  return 0;
}