//Faça um programa que leia um numero indeterminado de idades de individuos (pare quando for informada a idade 0),
//e calcule a idade media desse grupo.
#include <stdio.h>
int main(){
    int idade;
    float idade_media=0, soma=0, individuos=0;
    printf("Qual a idade desse individuo:\n");
    scanf("%d", &idade);
    soma+= idade;
    individuos=individuos+1;
    idade_media= soma/individuos;
    if (idade==0)
    {
        printf("fim");
    }

    while (idade!=0)
    {
        printf("Qual a idade desse individuo:\n");
    scanf("%d", &idade);
    soma+= idade;
    individuos=individuos+1;
    idade_media= soma/individuos;
    if (idade==0)
    {
        printf("fim");
    }
    else if (idade>0)
    {
        printf("A idade media e %.2f\n", idade_media);
    }
    }
    
}