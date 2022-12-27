#include<stdio.h>
#include <stdlib.h>
int main (){
int vetor[10], j=0, vetor1[10], impares=0, i;
printf("Digite 10 valores entre 0 e 50\n");
for (int i = 0; i < 10; i++)
{
    scanf("%d", &vetor[i]);

    if (vetor[i] < 0 || vetor[i] > 50)
    {
        printf("Mona vc e maluca? digite entre 0 e 50, sua vadia esmirrenta:\n");
        scanf("%d", &vetor[i]);
    }
    if (vetor[i] % 2 !=0)
    {
        impares++;
        vetor[i]=vetor1[j];
    } 
}
printf("Os impares sao: %d\n", impares);

for ( int i = 0; i < 10; i++)
{
    printf ("\n%d", vetor[i]);
    for (int j = 0; j < impares;  j++)
    {
       printf("impares:%d\n", vetor1[j]);
    }
    
}

}
