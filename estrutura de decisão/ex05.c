#include <stdio.h>

void ex05(void){
  
  //declare as variaveis
  float nota1, nota2;  
  
  //mensagem para adicionar as notas
  printf("Adicione sua primeira nota:\n");
  scanf("%f", &nota1);

  printf("Adicione a segunda nota:\n");
  scanf("%f", &nota2);
  
  //variavel com o calculo da media
  float notafinal = nota1 + nota2;
  float media = notafinal/2;

  //declarar uma condição se for aprovado
  
  if(media == 10){
    printf("Aprovado com distinção\n");
  } 
  else if(media>=7){
    printf("Aprovado");
  }
  else{
    printf("Reprovado");
  }
                            
  
}
