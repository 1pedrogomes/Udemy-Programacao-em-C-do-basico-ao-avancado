//Escreva um programa que receba um numero inteiro maior que 1 e verifique se ele é primo ou nao;
#include<stdio.h>
int main (){
    int numero, resultado=0, i;
 printf("Digite um numero kerelhonn, maiores que um amore:\n");
 scanf("%d", &numero);
 while (numero<=1)
 {
    printf("mona vc e maluca? eu disse numeros maiores que 1:\n");
    printf("Digite um numero kerelhonn:\n");
 scanf("%d", &numero);
 }
 if (numero>1)
 {
    for ( i = 2; i < numero; i++)
    {
         if (numero % i ==0)
    {
        resultado++;
    }

    }
    
 }
     if (resultado==0)
    {
        printf("O %d e primo", numero);
    }
    else {
        printf("O numero %d nao e primo", numero);
    }
 
   
   
    
    
}