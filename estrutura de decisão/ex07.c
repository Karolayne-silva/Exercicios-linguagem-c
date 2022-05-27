#include <stdio.h>

  void ex07(void){

    //declarar variaveis
    int v1, v2, v3, maior, menor;

    printf("Digite 3 valores: ");
    scanf("%i%i%i", &v1, &v2, &v3);
    
  //condição para o menor número
    if(v1 < v2 && v1 < v3){
      menor = v1;
    }
    else if(v2 < v1 && v2 < v3){
      menor = v2;
    }
    else{
      menor = v3;
    }
    
  //condição para o maior numero
    
    if(v1 > v2 && v1 > v3){
       maior=v1;
     }
    else if(v2 > v1 && v2 > v3){
      maior = v2;
    }
    else{
      maior = v3;
    }
  //mensagem para informar o maior e menor valor
    printf("menor valor: %i e maior valor: %i", menor, maior);

  
}
//Faça um Programa que leia três números e mostre o maior e o menor deles. 