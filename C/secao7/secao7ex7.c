#include<stdio.h>
int main(){
    int vetor[10], x=0, i=0, posicao=0;
    for ( i = 0; i < 10; i++)
    {
       printf("Digite 10 valores\n");
       scanf("%d", &vetor[i]);
       x=vetor[0];

      if (vetor[i]>x)
      {
        x=vetor[i];
        posicao=i;
      }
      

    }
 printf("O maior elemento foi %d e sua posicao:\n: vetor[%d]= %d\n", x, posicao, x);
        
        
        
    }
    
           

