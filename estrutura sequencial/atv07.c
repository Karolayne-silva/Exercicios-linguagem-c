#include <stdio.h>

int main(){
  int valor, hora;
  printf("Digite quanto você ganha por hora:\n");
  scanf("%i", &valor);
  
  printf("Digite quantas horas você trabalhou no mês de janeiro:\n");
  scanf("%i", &hora);

  int calc=valor*hora;
  printf("O seu salário no mês de janeiro será:%i", calc);

  return 0;
  
}
