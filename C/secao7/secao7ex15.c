#include <stdio.h>
int main(){
    int vetor[5], size, i, j, k;
    printf("Digite o tamnaho do vetor\n");
    scanf("%d", &size);
   printf("Digite %d elementos do vetor:\n", size);

    for (int i = 0; i < size; i++)
    {
         
        scanf("%d", &vetor[i]);
               
    }
    for (int i = 0; i < size; i++)
    {
        for (int j= i+1; j < size; j++)
        {
            if (vetor[i] == vetor[j])
            {
                for (int k=j; k < size-1 ; k++)
                {
                    vetor[k]= vetor[k+1];
                }
                j--;
                size--;
                
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        //Valores do vetor sem a repeticao
        printf("%d,", vetor[i]);
        
    }
    printf("\nO tamanho do vetor depois de elimar as repeticoes e: %d", size);
    
    return 0;
}