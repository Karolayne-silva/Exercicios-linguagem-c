#include <stdio.h>

void ex01(void){
      
  //declarar duas variaveis
    int num1, num2;
    
  //mostrar mensagem pra digitar o numero
    printf("Digite o primeiro numero:");
    scanf("%i", &num1);
    printf("Digite o segundo numero:");
    scanf("%i", &num2);
    
  //declarar uma condição onde o maior número aparece na mensagem
    if(num1 > num2){
      printf("O maior valor é:%i", num1);
    }
    else{
      printf("O maior valor é:%i", num2);
    }


}