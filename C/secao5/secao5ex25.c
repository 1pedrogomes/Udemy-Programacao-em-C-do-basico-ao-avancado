//faça um programa que some todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5
#include <stdio.h>
int main (){
    int soma=0, i=0;
    while (i<1000)
    {
        
        if (i % 3 ==0 || i % 5==0)
        {
            soma+=i;
            
        }
        i++;
    }
    printf(" a soma e: %d", soma);
}