#include <stdio.h>
int main() {
    float num1, num2;
    char operacao;
    printf("digite a operacao: s para soma, m para multiplicar, d para divisao, r subtracao\n");
    scanf("%c", &operacao);
    printf("Digite os numeros\n");
    scanf("%f %f", &num1, &num2);
switch (operacao)
{
case 's':
    printf("O resultado da soma e: %f", num1+num2);
    break;
case 'm':
    printf("O resultado da multiplicacao e: %f", num1*num2);
    break;
case 'd':
    printf("O resultado da divisao e: %f", num1/num2);
    break;
case 'r':
    printf("O resultado da subtracao e: %f", num1-num2);
    break;

default: ("Erro, selecione uma das operacoes");
    break;
}
}