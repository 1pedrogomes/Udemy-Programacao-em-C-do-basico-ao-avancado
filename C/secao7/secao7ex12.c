#include<stdio.h>
int main(){
    float vetor[5], x=0, menor=0, media=0, soma=0;
    for (int i = 0; i < 5; i++)
    {
       printf("Digite 5 valores\n");
       scanf("%f", &vetor[i]);
       x= vetor[0];
       menor=vetor[0];
       soma= soma + vetor[i];
       media= soma/5;
       if (vetor[i]>x)
       {
        x=vetor[i];
       }
       if (vetor[i]<menor)
       {
        menor=vetor[i];
       }
       
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", vetor[i]);
    }
    
    printf("O maior valor lido foi %.2f, o menor valor lido foi %.2f, a media foi %.2f\n", x, menor, media);
}