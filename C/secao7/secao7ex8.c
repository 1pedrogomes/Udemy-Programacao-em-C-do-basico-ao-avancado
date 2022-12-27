#include<stdio.h>
int main(){
    int vetor[6], i;

    for ( i = 0; i < 6; i++)
    {
        printf("Digite 6 valores:\n");
        scanf("%d", &vetor[i]);
    }
    for ( i = 6; i >0 ; i--)
    {
        printf("%d\n", vetor[i]);
    }
    
}