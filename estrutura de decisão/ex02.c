#include <stdio.h>

void ex02(void){

  int valor;
  printf("Digite um valor:\n");
  scanf("%i", &valor);

  if(valor < 0){
    printf("O valor é negativo\n");
  }
  else{
    printf("O valor é positivo\n");
  }

}
