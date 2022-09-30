//Faca um programa que gere uma matriz bidimensional com elementos aleatorios e receba do usuario um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4
#define MN -20
#define MX 41

int main(void) {
  int matriz[TAM][TAM],elemento,cont=0;

  puts("Matriz gerada:\n");
  srand(time(NULL));
  for(int l= 0; l<TAM; l++){
    for(int c= 0; c<TAM; c++){
      matriz[l][c] = MN + rand()%MX;
      printf ("%3d  ",matriz[l][c]);
    }
    puts("");
  }

  printf("\nDigite um número inteiro: ");
  scanf("%d",&elemento);

  for(int l= 0; l<TAM; l++){
    for(int c= 0; c<TAM; c++){
      if(elemento==matriz[l][c]) cont++;
    }
  }

  printf("\n%d aparece na matriz %d vezez!",elemento,cont);
  
  return 0;
}

