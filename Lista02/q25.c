/*Calcule o valor de π a partir da serie infinita
π = 4 − 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Imprima uma tabela que mostre o valor de π aproximado por um termo dessa serie, e depois por dois termos, tres termos, e assim por diante.*/

#include <stdio.h>

int main(){
  float div = 1, pi=0;
  for(int termo=1; termo>0; termo++){
    if(termo%2) pi += (4/div);
    else pi -= (4/div);
    div+=2;
    printf("\npi = %f",pi);
  }

  return 0;
}