#include <stdio.h>
int main (){
float num1,num2,num3, soma_dos_quadrados;
printf("digite o primeiro valor:\n");
scanf("%f", &num1);
printf("digite o segundo valor:\n");
scanf("%f", &num2);
printf("digite o terceiro valor:\n");
scanf("%f", &num3);
soma_dos_quadrados= (num1*num1)+(num2*num2)+(num3+num3);
printf("A soma dos quadrados e de %.2f", soma_dos_quadrados);
}