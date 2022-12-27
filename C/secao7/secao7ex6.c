#include <stdio.h>
int main(){
    int x=0, vetor[10], i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite 10 valores");
        scanf("%d", &vetor[i]);
         x= vetor[0];
        if (vetor[i]>x)
        {
            x= vetor[i];

        }
        
    }
    printf("O maior numero que voce digitou foi %d", x);
}