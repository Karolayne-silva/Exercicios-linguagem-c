#include <stdio.h>
#include <math.h>

int main() {
  int raio;
  printf("Adicione o valor do raio:\n");
  scanf("%i", &raio);

  int calc = pow(raio,2)*3.14;
  printf("O valor da área é:%i",calc);

  return 0;
}
//raio^2*pi
