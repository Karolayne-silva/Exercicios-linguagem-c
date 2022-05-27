#include <stdio.h>

void ex04(void){
  
  //declarar uma variavel do tipo caracter
  char letra;
  
  //declarar função que mostre uma mensagem
  printf("Digite uma letra: ");
  scanf("%c", &letra);
  
  //colocar uma condição para saber se é uma vogal ou consoante
  if (letra == 'a' && 'e' && 'i' && 'o' && 'u'){
    printf("A letra informada é uma vogal\n");
  }
  else{
    printf("A letra informada é uma consoante");
  }
}

