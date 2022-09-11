/*Diga a ordem de calculo dos operadores em cada uma das instru ̧coes em C a seguir e mostre o valor de x depois que cada instrucao for executada.
• x = 7 + 3*6/2-1;
• x = 2%2 + 2*2-2/2;
• x = (3 * 9 * (3 + (9*3/ (3) ) ) );*/

#include <stdio.h>

int main(){
  short int x;
  x = 7 + 3*6/2-1; //1º * e / ; 2º + e -
  printf("\nx = %hi",x);
  x = 2%2 + 2*2-2/2; //1º * , / e % ; 2º + e -
  printf("\nx = %hi",x);
  x = (3*9*(3+(9*3/(3)))); //3*9 e 9*3/3; 9+3; 27*12
  printf("\nx = %hi",x);
  
  return 0;
}