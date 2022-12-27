//Em matemática, o numero harmônico designado por H(n) define-se como sendo a soma da série harmónica:  
// H(n)= 1+1/2+1/3+1/4+....1/n;
//Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).
#include <stdio.h>
int main (){
    int n;
    float harmonico=0, i;
    printf("Digite um valor:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        harmonico+= 1/i;
        
    }
    printf("A soma da serie harmonica e:%.2f", harmonico);
    
}