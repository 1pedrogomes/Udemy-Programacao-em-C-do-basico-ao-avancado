#include <stdio.h>
int main(){
float num1, num2;
char operacao;
printf("Digite a opcao 1 soma, 2 subtracao, 3 produto, 4 divisao\n");
scanf("%c", operacao);
printf("Digite os numeros:");
scanf("%f %f", &num1, &num2);
switch (operacao)
{
case 1:
    printf("Soma", num1+num2);
    break;
    case 2:
    if (num2>num1)
    {
        printf("subtracao", num2-num1);
    }
    else if (num1>num2)
    {
         printf("subtracao", num1-num2);
    }
    break;

    case 3:
    printf("multiplicacao", num1*num2);
    break;

    case 4:
    if (num1/num2 && num2!=0)
    {
        printf("Divisao", num1/num2);
 }
        else if (num2/num1 && num1!=0)
        {
           printf("Divisao", num2/num1);
        }
        else 
        printf("Nao pode dividir por 0");
   
    break;

default: 
printf("ERRO, DIGITE UMA DAS OPERACOES");
    break;
}

}
