#include<stdio.h>
int main(){
    int numero, alg1, alg2, alg3;
    printf("Digite um numero entre 100 e 999:\n");
    scanf("%d", &numero);
    alg1= numero/100;
    alg2= numero/10 % 10;
    alg3= numero % 10;
    while (numero<100 && numero>999)
    {
        printf("SEU VERME, DIGITE ENTRE 100 E 999\n");
        printf("Digite um numero  entre 100 e 999:\n");
    scanf("%d", &numero);
    }
    printf("O primeiro algarismo e:\n%d", alg1);
    printf("O segundo algarismo e:\n%d", alg2);
    printf("O terceiro algarismo e:\n%d", alg3);
}