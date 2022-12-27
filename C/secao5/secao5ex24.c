//Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores desse numero, com exceção dele próprio
//Ex: A soma dos divisores do numero 66 é 1+2+3+6+11+22+33=66
#include <stdio.h>
int main(){
    int numero, soma=0, i;
    printf("Escolha um numero:");
    scanf("%d", &numero);
     printf("O numero escolhido foi: %d\n e seus divisores sao:\n", numero);

    for ( i = 1; i < numero; i++)
    {
        if (numero % i ==0)
        {
            printf("%d ", i);
            soma+=i;
        }
            
    }

  printf("\nA soma dos divisores e: %d", soma);
}