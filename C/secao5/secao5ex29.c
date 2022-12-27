//Escreva um programa para calcular o valor da série, para 5 termos:
//S= 0+1/2!+2/4!+3/6!
//n+1/n+2*(n-1)
#include<stdio.h>
int main(){
    int n;
    float i, s=0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        s+= (i/2)/i*(i-1);
    }
    printf("O valor e: %.2f", s);
}