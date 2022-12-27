//Faça programas para calcular as seguintes sequências
//1-2+3-4+(2N-1)
// a formula é: (2n-1)-2n
#include<stdio.h>
int main(){
 int n, i;
 float s=0;
 printf("Digite um numero:");
 scanf("%d", &n);
 for ( i = 1; i <=n; i++)
 {
    s+=(2*i-1)-2*i;
 }
    printf("A soma da sequencia e:\n%.2f", s);
}