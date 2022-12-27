//Faça programas para calcular as seguintes sequências
//1+2+3+4+5....N
#include<stdio.h>
int main(){
    int n;
    float s=0, i;
    printf("Digite um numero:");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        s+=i;
    }
    printf("A soma e: %.2f", s);
}