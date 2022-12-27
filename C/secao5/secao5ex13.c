#include<stdio.h>
int main(){
    int i, n, crescente=0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for ( i = 0; crescente < n; i++)
    {
        crescente= crescente+1;
        if (i % 2 ==0)
        {
        
         printf("%d", i);
        }
        
    }
    
}