#include <stdio.h>
int main (){
    float valorh, nhm, valorpago;
    printf("Digite o valor da hora trabalhada:\n");
    scanf("%f", &valorh);
    printf("Digite o numero de horas trabalhadas no mes:\n");
    scanf("%f", &nhm);
    valorpago= valorh*nhm +((valorh*nhm)*0.1);
    printf("O valor a ser pago para o funcionario e:\n%.2f", valorpago);


}