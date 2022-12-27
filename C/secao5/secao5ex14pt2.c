#include<stdio.h>
int main(){
    int i, decrescente=0, n;
       printf("Digite um numero:\n");
    scanf("%d", &n);
     i=n;
    while (decrescente<n)
    {
        decrescente=decrescente+1;
        if (i % 2 ==0)
        {
            printf("%d", i);

        }
        i--;

    }
    
}