//Elabore um programa que faça leitura de vários números inteiros, até que se digite um numero negativo. O programa tem que 
//retornar o maior e o menor lido.
//ideia if numero>maior entao maior=numero e if menor<numero entao menor=numero
#include<stdio.h>
int main(){
    int numero, maior, menor;
    printf("digite um numero:\n");
    scanf("%d", &numero);
    maior=numero;
    menor=numero;
    while (numero>0)
    {
       printf("digite um numero:\n");
    scanf("%d", &numero);
    if (numero>maior)
    {
        maior=numero;

    }
    if (numero<menor)
    {
        menor=numero;
    }
    
   printf("o maior e %d e o menor e %d\n", maior, menor);
    }
 
    
}