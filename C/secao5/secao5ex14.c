#include<stdio.h>
int main(){
    int i, decrescente=0, n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for ( i = n; decrescente < n; i--)
    {
        decrescente= decrescente+1;
        if (i % 2 ==0)
        {
            printf("\n%d", i);
        }
        
    }
    
}