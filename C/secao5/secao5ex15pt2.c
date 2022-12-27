#include <stdio.h>
int main(){
    int i, crescente=0, n;
    printf("Digite o numero:\n");
    scanf("%d", &n);
    while (crescente < n)
    {
        crescente= crescente+1;
        if (i % 2 !=0)
        {
            printf("%d", i);
    
        }
        i++;
    }
    
}