#include<stdio.h>
int main(){
    int numero, maior= 0, menor=0, y;
    printf("digite um numero:\n");
    scanf("%d", &numero);
    maior=numero;
    menor=numero;
    for (y = 1; y <10; y++)
    {
         printf("Digite um numero:\n");
        scanf("%d", &numero);
        if (numero>maior)
        {
            maior=numero;
        }
     if (numero<menor)
        {
            menor=numero;
        }
        
        
    }
   printf ("%d e  %d\n", maior, menor);
    
   
    
}