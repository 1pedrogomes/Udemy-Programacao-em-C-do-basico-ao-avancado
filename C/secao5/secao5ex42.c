//Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos 
//o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.
#include <stdio.h>
int main(){
 float valor, quadrado=0, cubo=0, raiz_quadrada=0;
 printf("Digite um valor\n");
 scanf("%f", &valor);
quadrado= valor*valor;
cubo= quadrado*valor;
raiz_quadrada= sqrt(valor);

if (valor<=0)
{
    printf("fim");
}
else if (valor>0)
{
    printf("O quadrado do valor e: %2.f, cubo: %2.f, raiz quadrada: %2.f\n", quadrado, cubo, raiz_quadrada);
}

while (valor>0)
{
     printf("Digite um valor\n");
 scanf("%f", &valor);
quadrado= valor*valor;
cubo= quadrado*valor;
raiz_quadrada= sqrt(valor);

if (valor<=0)
{
    printf("fim");
}
else if (valor>0)
{
    printf("O quadrado do valor e: %2.f, cubo: %2.f, raiz quadrada: %2.f\n", quadrado, cubo, raiz_quadrada);
}

}



}