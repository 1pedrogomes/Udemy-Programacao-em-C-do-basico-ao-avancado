#include <stdio.h>
int main (){
    int numero, soma=0, valores=0;
    while (valores<10)
    {
        printf("digite um numero:\n");
    scanf("%d", &numero);
valores= valores+1;
soma+=numero;

    }
    printf("A media e:%d", soma/10);
   

}