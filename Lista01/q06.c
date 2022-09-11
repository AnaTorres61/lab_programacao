/*Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atrav ́es da seguinte f ́ormula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7*/

#include <stdio.h>
#include <ctype.h>

int main() {
  float altura;
  unsigned char sexo;
  
  puts("Digite sua altura(m): ");
  scanf("%f",&altura);
  while ((getchar()) != '\n');// (clears the input buffer)
  puts("Digite seu sexo(F-feminino M-masculino): ");
  sexo=getchar();
  sexo=toupper(sexo);
  switch (sexo){
    case 'F':
      printf("\nSeu peso ideal é %.2f",62.1*altura-44.7);
      break;
    case 'M':
      printf("\nSeu peso ideal é %.2f",72.7 * altura - 58);
      break;
    default:
      puts("\nEntrada inválida!");
  }
  
  return 0;
}