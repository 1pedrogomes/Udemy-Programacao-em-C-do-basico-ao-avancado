//Escreva um programa que leia um inteiro nao negativo 'n' e imprima a soma dos 'n' primeiros numeros primos.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, divisores=0, i=0, primos=0, numeros=1;
    printf("Digite quantos numeros primos vc quer:\n");
    scanf("%d", &n);
    while (primos!=n)
    {
      for ( i = 1; i <= 500; i++)
   {
    
    if (numeros % i ==0)
    {
        divisores++;
    }
    if (divisores==2)
    {
        printf("E primo %d\n", numeros);
        primos++;
    }
   
   } 
    numeros++;
}
}