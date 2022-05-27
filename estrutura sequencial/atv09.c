#include <stdio.h>

int main(){
  float temp;
  
  printf("Adicione a temperatura em graus C:\n");
  scanf("%f",&temp);
  
  float calc=temp*1.8+32;
  printf("A temperatura em Fahrenheit será:%.2f",calc);

  return 0;
}
