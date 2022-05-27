#include <stdio.h>

void ex10(void){

  //varivel turno
  char turno;
  
  //mensagem que para informar o turno
  printf("Digite a primeira letra do turno que você estuda:\n");     
  scanf("%c", &turno);

  //Declarar 3 condições 
  if(turno=='M'){
    printf("Bom dia!\n");
  }
  else if(turno=='V'){
    printf("Boa tarde!\n");  
  }
  else if(turno=='N'){
    printf("Boa noite!\n");
  }
  else{
    printf("Valor inválido");
  }
}


