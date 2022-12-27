//faça um programa que calcule a area de um triangulo, cuja base e altura são fornecidas pelo usuario. 
//Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou igual a 0.
#include<stdio.h>
int main(){
    int area=0, base, altura;
    printf("Digite a base do triangulo:\n");
    scanf("%d", &base);
    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);
    
   while (base>0 && altura>0)
   {
    area= base*altura;
    printf("A area e: %d\n", area);
   }
   
    while (base<=0 || altura<=0)
    {
        printf("ERRO! valores iguais a 0 ou menores que o mesmo sao invalidos\n");
        printf("Digite a base do triangulo:\n");
    scanf("%d", &base);
    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);
    area= base*altura;
printf("A area e: %d\n", area);
    }
    
    
}