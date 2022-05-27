#include <stdio.h>
#include <math.h>

int main(){
  int valor;
  printf("Adicione um valor para calcular a área de um  quadrado\n");
  scanf("%i", &valor);

  int area= pow(valor,2);
  printf("O dobro da área desse quadrado é: %i",area*2);
  
  return 0;
    
}
