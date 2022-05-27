#include <stdio.h>

void ex03(void){
  
  //declarar uma variável do tipo caracter
  char sexo;
  
  //mostra mensagem pra o usuário digitar
  printf("Digite seu sexo:\n");
  scanf("%c", &sexo);
  
  //declara uma condição
  if(sexo == 'f'){
    printf("F-feminino\n");
  }
  //essa segunda condição é se a primeira não entrar
  else if(sexo == 'm'){
    printf("M-masculino");
  } 
  else {
    printf("Sexo invalido");
  }
  
  
}
