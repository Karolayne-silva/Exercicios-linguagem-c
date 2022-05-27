#include <stdio.h>

void ex11(void){

  //declarar variaveis
  float salario, calculo, aumento, percentual;

  printf("Informe seu salário: ");
  scanf("%f", &salario);

  //condição de acordo com o valor do salario
  if(salario <= 280){
    calculo = salario*0.2;
    aumento = salario + calculo;
    percentual = 20;
  }
  else if(salario >=280 && salario <=700){
    calculo = salario*0.15;
    aumento = salario + calculo;
    percentual = 15;
  }
  else if(salario >=700 && salario <=1500){
    calculo = salario*0.1;
    aumento = salario + calculo;
    percentual = 10;
  }
  // caso nenhuma dessas condições seja verdadeira
  else{
    calculo = salario*0.05;
    aumento = salario + calculo;
    percentual = 5;
  }

  //mensagem de informações
  printf("Salário antes do reajuste: %.2f\n", salario);
  printf("O percentual de aumento aplicado foi: %.0f %\n", percentual);
  printf("o valor do aumento foi: %.2f\n", calculo);
  printf("O novo salário apos o aumento: %.2f", aumento);
      
} 
 
  
        