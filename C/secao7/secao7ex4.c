#include <stdio.h>
int main(){
    int vetor[8], i, x, y, soma= x + y;
    for ( i = 0; i < 8; i++)
    {
        printf("Digite 8 valores:");
        scanf("%d", &vetor[i]);

    }
    x= vetor[2];
    y= vetor[1];
     soma= x+y;
        printf(" %d\n", soma);
}