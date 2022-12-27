//faça um programa que calcule a diferença entre a soma dos quadrados dos 100 primeiros números naturais
// e o quadrado da soma. Ex: de soma dos quadrados dos 10 primeiros naturais 1²+2²....10²= 385
//quadrado da soma dos naturais é: (1+2+3..+10)²= 55²= 3025.
// a diferença é 3025-385=2640.
#include<stdio.h>
int main(){
    int i, soma_quadrado=0, quadrado_soma=0, soma=0;
    for ( i = 0; i <= 100; i++)
    {
        soma_quadrado+=i*i;
        soma+= i;
        quadrado_soma= soma*soma;
    }
    printf("O quadrado da soma e: %d\n", quadrado_soma);    
    printf("A soma do quadrado e: %d\n", soma_quadrado);
    printf("A diferenca entre eles e:%d\n", quadrado_soma-soma_quadrado);

}