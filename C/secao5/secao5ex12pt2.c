#include<stdio.h>
int main(){
    int i, ordem=0, n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    i=n;
    while (ordem<=n)
    {
        ordem=ordem+1;
        printf("\n%d", i);
        i--;
    }
    
}