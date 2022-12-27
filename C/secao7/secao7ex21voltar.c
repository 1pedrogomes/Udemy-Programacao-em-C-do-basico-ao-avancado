#include <stdio.h>
int main(){
    int a[10], b[10];
    int c[10];
    printf("Digite 10 numeros para o vetor a:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d\n", &a[i]);
    }
    printf("Digite 10 numeros para o vetor b:\n");
     for (int i = 0; i < 10; i++)
    {
        scanf("%d\n", &b[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("a: %d\n b: %d", a[i], b[i]);
        c[i]= a[i]-b[i];
        printf(" c: %d\n", c[i]);
    }
    
}