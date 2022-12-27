#include<stdio.h>
int main(){
    float vetor[10], contador=0, soma=0;
    for ( int i = 0; i < 10; i++)
    {
          printf("Digite 10 valores:\n");
    scanf("%f", &vetor[i]);
    if (vetor[i]<0)
    {
        contador=contador+1;
    }
    if (vetor[i]>0)
    {
        soma= soma+vetor[i];
    }
    
    }
    printf("A quantidade de numeros negativos e: %.2f\n", contador);
    printf("A soma dos positivos e: %.2f", soma);
  

}