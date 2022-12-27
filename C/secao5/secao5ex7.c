#include <stdio.h>
int main(){
    int numero, soma=0, valor=0;
    while (valor<10)
    {
        printf("digite um numero\n");
        scanf("%d", &numero);
        if (numero<0)
        {
            printf("ERRO: insira numeros positivos\n");
        }
        else{
            soma+= numero;
            valor= valor+1;
            
        }
    }
    printf("a media e:%d", soma/10);
    
}