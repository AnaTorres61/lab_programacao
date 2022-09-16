/*Refaca a questao 10, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>
#include <math.h>

int main(){
  int a,b;
  
  printf("FAIXA DE VALORES DE ");  scanf("%d",&a);
  printf("A ");  scanf("%d",&b);

  if(a>b){a=a^b;  b=a^b;  a=a^b;}
  
  for(int i=a; i<=b; i++){
      if(!(i%4)) printf("%.f ",pow(i,2));
    }
  return 0;
}