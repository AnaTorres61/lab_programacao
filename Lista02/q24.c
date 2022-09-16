/*Ache todas as triplas de Pitagoras nao superiores a 500 para cateto1, cateto2 e hipotenusa.*/

#include <stdio.h>
#include <math.h>

int main(){
  puts("\nTRIPLA DE PITAGORAS:");
  int cateto1, cateto2, hipotenusa;
  for(hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
    for(cateto1 = 1; cateto1 < 500; cateto1++) {
      for(cateto2 = 1; cateto2 < 500; cateto2++) {
        int esquerda = pow(cateto1,2) + pow(cateto2,2);
        int direita = pow(hipotenusa,2);

        if(esquerda == direita) 
          printf("\nhipotenusa: %d  cateto1: %d  cateto2: %d", hipotenusa, cateto1, cateto2);
        else if(esquerda > direita) break;
      }
    }
  }
  return 0;
}