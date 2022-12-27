//faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor E, conforme a formula a seguir;
//E= 1+1/1! + 1/2! + 1+3!... 1/N!
#include <stdio.h>
int main(){
    int n;
    float e=0, i;
    printf("Digite um valor:\n");
    scanf("%d", &n);
   for ( i = 1; i <= n; i++)
   {
    e+= 1/i*(i-1); 
   }
   printf("O valor de E e igual a:%.2f", e);
    
}