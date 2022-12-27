//Faça um programa que calcule e escreva o valor de S
//S= 1/1 + 3/2 + 5/3... 99/50
#include<stdio.h>
int main(){
int n=1;
float s=0, i;
for ( i = 1; i <= 99; i+=2)
{
    s+= i/n; 
    n++;
}
printf("A soma e: %.2f", s);
}