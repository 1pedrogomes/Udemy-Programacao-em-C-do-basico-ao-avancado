#include <stdio.h>
int main(){
    int numero, soma=0;
        for (int i = 0; i < 5; i++)
    {
    printf("digite um numero:\n");
    scanf("%d", &numero);
    soma= soma+numero;
    }
    printf("A soma e %d", soma);
}