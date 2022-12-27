#include<stdio.h>
int main(){
    int vetor[10], contador=0, i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite 10 valores:\n");
        scanf("%d", &vetor[i]);
        
    }
        for ( i = 9; i >= 0; i--)
        {
            if (vetor[i] % 2 ==0)
            {
                contador=contador+1;
            }
            
            if (vetor[i] % 2 ==0 && contador<7)
            {
                 printf("%d\n", vetor[i]);
            }
            
        }
        
        
    }
    
