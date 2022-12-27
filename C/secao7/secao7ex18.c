#include<stdio.h>
int main(){
    int vetor[10], x=0, contador=0;
    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite 10 valores do vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % x ==0)
        {
           contador=contador+1;
        }
       
        
    }
      printf("Multiplos de x sao:\n");
     for (int i = 0; i < 10; i++)
        {
               if (vetor[i] % x ==0)
        {
          
           printf("%d\n", vetor[i]);
           
        }
        
        }
    printf("\nA quantidade de multiplos de x no vetor e\n %d", contador);
}