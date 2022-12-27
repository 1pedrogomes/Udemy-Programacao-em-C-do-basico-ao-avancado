//Escreva um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17, após um numero dado.
#include <stdio.h>
int main(){
    int multiplos=0, numero;
    
    while (multiplos<1)
    {
        printf("insira um numero");
        scanf("%d", &numero);
        if (numero % 11 == 0 || numero % 13 ==0 || numero % 17==0)
        {
            multiplos=multiplos+1;
            printf("o numero cujo e multiplo de uma dessas condicoes e:%d", numero);
        }
        
    }
    
}