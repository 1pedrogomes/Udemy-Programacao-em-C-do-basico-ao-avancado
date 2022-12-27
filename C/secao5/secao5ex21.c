#include<stdio.h>
int main(){
    int numero1, numero2, soma=0, multiplicacao=1, i;
    printf("Digite um numero:\n");
        scanf("%d", &numero1);
        printf("Digite outro numero:\n");
        scanf("%d", &numero2);
    for ( i = numero1+1; i < numero2; i++)
    {
        
        if (i % 2 ==0)
        {
            soma=(soma+i);
        } 
        if (i % 2 !=0)
        {
            multiplicacao=multiplicacao*i;
        }
        
      
        
        
    }
    printf("A soma dos pares do intervalo incluindo os numeros e: %d\n", soma+numero1+numero2);
    printf("A multiplicacao dos impares incluindo os digitados e: %d\n", multiplicacao*numero1*numero2);
}