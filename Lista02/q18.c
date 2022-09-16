/*Escrever um programa que calcule e apresente o somatorio do numero de graos de trigo que se pode obter num tabuleiro de xadrez, obedecendo a seguinte regra: colocar um grao de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um grao, no segundo quadro colocam-se dois graos (tendo neste momento tres graos), no terceiro quadro colocam-se quatro graos (tendo neste momento sete graos), no quarto quadro colocam-se oito graos (tendo-se entao quinze graos) ate atingir o sexagesimo quarto quadro.*/

#include <stdio.h>

int main(){
  unsigned long int somatorio=0,trigo=1;
  for(int quadrado=1; quadrado<65; quadrado++){
    somatorio+=trigo;
    trigo=trigo<<1;
  }
  printf("\nSOMATORIO: %lu",somatorio);

  return 0;
}