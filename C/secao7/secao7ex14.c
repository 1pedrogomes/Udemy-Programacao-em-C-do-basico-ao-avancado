#include<stdio.h>
int main (){
   
    int vetor[5], i=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite valores:\n");
        scanf("%d", &vetor[i]);           
        }
    //achando elementos repetidos: coloca-se o j= i+1 para não andarem juntos e assim nao repetir todo elemento de i.
    for ( i = 0; i <5; i++)
    {
        for ( int j = i+1; j < 5; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("Valor repetido: %d, nos indices %d e %d", vetor[i], i, j);
            }
            
        }
        
    }
       
    
}