#include <stdio.h>

int main(){
  
  int area;
  
  printf("Digite o tamanho da área a ser pintada:\n");
  scanf("%i", &area);
  
  int litros = area/3;
  int latas = litros/18;

  printf("Será necessário %i lata(s) e o valor será R$%i\n", latas, latas * 80);

  return 0;
}
