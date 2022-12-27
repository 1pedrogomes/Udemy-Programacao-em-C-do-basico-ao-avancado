//Faça um programa que gera um numero aleatorio entre 0 a 1000. O usuário deve tentar acertar qual o numero gerado
//A cada tentativa o programa deverá informar se o chute é menor ou maior que o número gerado. O programa acaba quando
// o usuario acertar o numero gerado. O programa acaba quando o usuário acerta o número gerado. O programa deve informar
//Em quantas tentativas o número foi descoberto.
#include<stdio.h>
#include<stdlib.h>
int main (){
    int numero, tentativa=0, acerto=0, i, x=0;
    printf("Gerando um valor:\n");
 x= rand() % 1000;
       printf("%d\n", x);
  while (acerto<1)
  {
    

    printf ("Digite um numero\n");
    scanf("%d", &numero);
    

    if (numero==x)
    {
        printf("Voce acertou\n");
        acerto= acerto+1;
    }
    else if (numero>x)
    {
        printf("Voce digitou um valor maior\n");
    }
    
    else{
        printf("Voce digitou um valor menor\n");

    }
    tentativa++;
  }
  printf("Voce fez %d tentativa(s)", tentativa);
    
}
