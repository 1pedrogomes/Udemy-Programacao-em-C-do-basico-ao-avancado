#include <stdio.h>
int main () {
    float valor, desconto;
    printf("informe o valor do produto:\n");
    scanf("%f", &valor);
    desconto= (valor)-(valor*0.12);
    printf ("Com o desconto o valor e:\n %.2f", desconto);


}