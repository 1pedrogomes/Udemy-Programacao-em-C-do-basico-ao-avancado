#include <stdio.h>
int main (){
    float numero, raiz;
    printf("digite um numero\n");
    scanf("%f", &numero);
    if (numero>0)
    {
        raiz= sqrt (numero);
        printf("a raiz quadrada do numero e %.2f\n", raiz);
    }
    else
    printf ("numero invalido\n");
    printf ("o numero digitado foi: %.2f", numero);
} 

