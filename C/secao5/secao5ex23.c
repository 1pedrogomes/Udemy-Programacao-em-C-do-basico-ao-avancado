\\Faca um algoritmo que leia um numero positivo e imprima seus divisores
#include<stdio.h>
int main(){
    int numero, i;
printf("Insira um numero:\n");
    scanf("%d", &numero);
    printf("O numero escolhido foi: %d e seus divisores sao: ", numero);

for ( i= 1; i <= numero; i++)
{
    
    if (numero % i ==0)
    {
        printf("%d ", i);
    }
    
    
    

}
}