#include <stdio.h>

void ex06(void){
  //declarar duas variaveis
    int n1, n2, n3;
    
  //mostrar mensagem pra digitar o numero
    printf("Digite o primeiro numero:");
    scanf("%i", &n1);
    printf("Digite o segundo numero:");
    scanf("%i", &n2);
    printf("Digite o terceiro numero:");
    scanf("%i", &n3);
    
  //declarar uma condição onde o maior número aparece na mensagem

  if (n1 > n2 && n1 > n3){
    printf("O maior número é: %i", n1);
    }
  else if (n2 > n1 && n2 > n3){
    printf("O maior numero é:%i", n2);
  }
  else {
  printf("O maior numero é:%i", n3);
  }
  
}                                   