#include <stdio.h>

int main(){
  float altura;
  printf("Digite sua altura:\n");
  scanf("%f", &altura);

  float pesoIdeal=(72.7*altura)-58;
  printf("O seu peso ideal é:%.2f", pesoIdeal);

  return 0;
  
}
