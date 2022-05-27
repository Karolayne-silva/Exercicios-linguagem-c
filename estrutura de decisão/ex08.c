#include <stdio.h>

void ex08(void){

  // variaveis produtos   
  float produto1, produto2, produto3;

  //mensagem para inserir o preço
  printf("Digite o valor dos 3 produtos: ");
  scanf("%f%f%f", &produto1, &produto2, &produto3);
  
 
  //condição que vai me mostrar o menor valor
  if(produto1<produto2 && produto1<produto3){
    printf("O produto que você deve comprar é o de valor: %.2f", produto1);
  }
  else if(produto2<produto1 && produto2<produto3){
    printf("O produto que você deve comprar é o de valor:%.2f", produto2);
  }
  else{
    printf("O produto que você deve comprar é o de valor:%.2f", produto3);
  }
  
}
//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato 

 