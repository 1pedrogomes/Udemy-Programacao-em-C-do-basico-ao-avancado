//faça um programa que apresente um menu de opções para o calculo das seguintes operações entre dois números:
//adição (1), subtracao (2), multiplicacao (3), divisao (4), saida (5);
//o programa deve possibilitar ao usuario a escolha da operação desejada, a exibição do resultado, e a volta ao menu de 
//opções. O programa só termina quando for escolhida a opção de saída (opção 5);
#include<stdio.h>
int main(){
    float numero1, numero2;
    char opcao;
    printf("Escolha dois numeros:\n");
    scanf("%f %f", &numero1, &numero2);

    while (opcao!=5)
    {
        printf("Escolha: adicao (1), subtracao (2), multiplicacao (3), divisao (4), saida (5)\n ");
    scanf("%c", &opcao);

        switch (opcao)
        {
        case'1':
            printf("Adicao %.2f\n", numero1+numero2);

            break;
        
        case'2':
printf("Subtracao numero 1 - numero 2: %.2f\n", numero1-numero2);
printf("Subtracao numero 2 - numero 1: %.2f\n", numero2-numero1);
 

        break;

        case'3':
        printf("Multiplicacao: %.2f\n", numero1*numero2);
        
        break;

        case '4':
printf("Divisao numero 1/numero 2: %.2f\n", numero1/numero2);
printf("Divisao numero 2/numero 1: %.2f\n", numero2/numero1);

        break;

        case '5':
        opcao=5;
        printf("Fim\n");
        break;

        default:
       
            break;
        }
    }
    
}