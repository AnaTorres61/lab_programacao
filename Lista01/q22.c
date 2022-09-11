/*Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiusculas, letras minusculas e sımbolos especiais. No mınimo, determine os numeros inteiros equivalentes ao conjunto seguinte: A B C a b c 0 1 2 $ * + / e o caractere espaco em branco.*/

#include <stdio.h>

int main(){
  printf("A = %d\n",'A');
  printf("B = %d\n",'B');
  printf("C = %d\n",'C');
  printf("a = %d\n",'a');
  printf("b = %d\n",'b');
  printf("c = %d\n",'c');
  printf("0 = %d\n",'0');
  printf("1 = %d\n",'1');
  printf("2 = %d\n",'2');
  printf("$ = %d\n",'$');
  printf("* = %d\n",'*');
  printf("+ = %d\n",'+');
  printf("/ = %d\n",'/');
  printf("space = %d\n",' ');
  
  return 0;
}