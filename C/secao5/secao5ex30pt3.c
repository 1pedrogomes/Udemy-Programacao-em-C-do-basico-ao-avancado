//Faça programas para calcular as seguintes sequências
//1+3+5+7...(2n-1)
//formula: (2n-1)+2n+1
#include <stdio.h>
int main(){
    int n, i;
    float s=0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for ( i = 0; i <=n; i++)
    {
        s+= (2*i-1)+(2*i+1);
    }
    printf("A soma da sequencia e: %.2f", s);
}