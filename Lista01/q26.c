/*Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os dois pontos no plano. (Utilize a funcao sqrt (numero), biblioteca math.h).*/

#include <stdio.h>
#include <math.h>

int main(){
  
  int x1,x2,y1,y2;
  float distancia;

  puts("Informe as coordenadas para o primeiro ponto: ");
  scanf("%d %d",&x1,&y1);
  puts("Informe as coordenadas para o segundo ponto: ");
  scanf("%d %d",&x2,&y2);

  printf("\nDistancia: %.2f\n", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));
  
  return 0;
}