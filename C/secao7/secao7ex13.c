#include<stdio.h>
int main(){
    int vetor[5], x=0, menor=0, posicaox=0, posicaomenor=0, i=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite 5 valores\n");
        scanf("%d", &vetor[i]);
        x=vetor[0];
        menor= vetor[0];
        if (vetor[i]>x)
        {
            x= vetor[i];
            posicaox=i;
        }
        if (vetor[i]<menor)
        {
            menor= vetor[i];
            posicaomenor=i;
        }
        
    }
    printf("O maior valor lido foi %d, sua posicao foi vetor[%d]\n", x, posicaox);
    printf("O menor valor lido foi %d, sua posicao foi vetor[%d]", menor, posicaomenor);
    
}