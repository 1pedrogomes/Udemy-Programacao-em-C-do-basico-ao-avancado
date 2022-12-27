#include<stdio.h>
int main(){
    int n=0, i, impares=0;
    printf("Digite um numero:");
    scanf("%d", &n);
     for (i = 0; impares < n; i++)
    {
        if (i % 2 !=0)
        {
            impares= impares + 1;
          printf("os naturais sao %d:\n", i);   
        }
        
    }
    
}