#include<stdio.h>
int main (){
    int i, crescente=0, n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for ( i = 0; crescente < n ; i++)
    {
        crescente= crescente+1;
        if (i % 2 !=0)
        {
           printf("\n%d", i);
        }
        
    }
    
}