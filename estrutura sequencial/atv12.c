#include <stdio.h>

int main(){
  float altura;
  
  printf("Digite sua altura:\n");
  scanf("%f", &altura);

  float pesoIdeal=(62.1*altura)-44.7;
  printf("O seu peso ideal é:%.2f", pesoIdeal);

  return 0;
  
}
