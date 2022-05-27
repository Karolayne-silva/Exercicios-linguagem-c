#include <stdio.h>

int main() {
  //declarar variável metros
  int metros;
  // mensagem para digitar o valor
  printf("Digite um valor em m:\n");
  
  scanf("%i",&metros);
  
  // declarar uma nova variável e colocar um valor a ela
  int cm=metros*100;
  
  printf("Esse número em cm é:%i", cm);
  
  return 0;
}