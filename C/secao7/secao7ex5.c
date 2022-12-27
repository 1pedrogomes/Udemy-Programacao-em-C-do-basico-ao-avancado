#include<stdio.h>
int main(){
    int vetor[10], contador=0, i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite 10 valores\n");
        scanf("%d", &vetor[i]);
        
    if (vetor[i] % 2 ==0)
{
    contador= contador+1;
    
}

    }
    for ( i = 0; i < 10; i++)
{
    if (vetor[i] % 2 ==0)
    {
         printf(" vetor[%d]= %d\n", i, vetor[i]);
    }
    
   
}

    printf("A quantidade de pares nesse vetor e %d\n", contador);
}