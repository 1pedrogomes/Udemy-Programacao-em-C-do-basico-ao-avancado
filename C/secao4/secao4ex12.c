#include <stdio.h>
#include <math.h>
int main(){
    float numero, logaritmo;
    printf("digite um numero:\n");
    scanf("%f", &numero);
    if (numero>0)
    {
        logaritmo= log10(numero);
        printf("O numero e valido e seu log e %f", logaritmo);

    }else{
        printf("numero invalido");
    }
    
}