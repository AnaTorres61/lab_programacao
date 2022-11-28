//Crie uma Estrutura disciplina em que um dos campos corresponde tambem a uma estrutura professor.

#include <stdio.h>

struct professor{
  char nome;
  int idade;
}

struct disciplina{
  char nome;
  int cargHora;
  struct professor prof;
}

int main(){
  return 0;
}