//faça um programa que verifique quais numeros entre 1000 e 9999 (inclusive) possuem a propriedade seguinte: 
//a soma dos dois digitos de mais baixa ordem com os dois digitos de mais alta ordem elevada ao quadrado é igual
//ao proprio numero. por exemplo o numero 3025 ---> 30+25 = 55 e 55²=3025.
#include<stdio.h>
int main(){
int i, algarismo1, algarismo2, soma=0;
for ( i = 1000; i <= 9999; i++)
{
    algarismo1= i/100;
algarismo2= i % 100;
soma= algarismo1+algarismo2;

    if (soma*soma==i)
    printf("%d\n", i);
    
}


}