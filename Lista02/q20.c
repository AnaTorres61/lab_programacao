#include <stdio.h>

int main(){
  int fatorial;
  for(int i=1; i<11; i++){
    if(i%2){
      fatorial=1;
      for(int j=2;j<=i;j++){
        fatorial*=j;
      }
      printf("FATORIAL DE %d = %d\n",i,fatorial);
    }
  }

  return 0;
}