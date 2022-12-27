#include <stdio.h>
int main (){
    int numero, par=0, lidos=0;
    while (numero!=1000)
    {
        printf("Digite um numero\n");
        scanf("%d", &numero);
        if (numero % 2 ==0)
        {
            par= par+1;
        }
        lidos=lidos+1;
    }
    printf("O numero de vezes em que apareceram pares foi: %d\n", par);
    printf("A quantidade de numeros lidos foi: %d\n", lidos);
}