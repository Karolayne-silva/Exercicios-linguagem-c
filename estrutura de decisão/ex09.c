#include <stdio.h>

void ex09(void){
  
  //variavel n=numero
  int n1, n2, n3;

  printf("Digite 3 numeros:\n");
  scanf("%i%i%i", &n1, &n2, &n3);
  

  if(n1>n2 && n1>n3 && n2>n3){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n1, n2, n3);
  }
  else if(n1>n2 && n1>n3 && n3>n2){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n1, n3, n2);
  }
  else if(n2>n1 && n2>n3 && n3>n1){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n2, n3, n1);
  }
  else if(n2>n1 && n2>n3 && n1>n3){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n2, n1, n3);
  }
  else if(n3>n1 && n3>n2 && n1>n2){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n3, n1, n2);
  }
  else if(n3>n1 && n3>n2 && n2>n1){
    printf("esses numeros em ordem decrescente é:%i, %i, %i", n3, n2, n1);
  }

  

  printf("Ordem decrescente dos números inseridos: ");
}
//Faça um Programa que leia três números e mostre-os em ordem decrescente.
//maior para o menor