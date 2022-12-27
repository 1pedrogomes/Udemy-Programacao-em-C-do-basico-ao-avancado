#include <stdio.h>
int main(){
    float  quantidade;
    char codigo;
    printf("Digite o codigo\n");
    scanf("%c", &codigo);
    printf("Digite a quantidade:\n");
    scanf("%f", &quantidade);
       switch (codigo)
    {
    case '0':
        printf("Voce escolheu cachorro quente, o valor e:%f", quantidade*1.20);

        break;
        case '1':
        printf("Voce escolheu Bauru simples, o valor e:%f", quantidade*1.30);

        break;
        case '2':
        printf("Voce escolheu Bauru com Ovo, o valor e:%f", quantidade*1.50);

        break;
        case '3':
        printf("Voce escolheu Hamburguer, o valor e:%f", quantidade*1.20);

        break;
        case '4':
        printf("Voce escolheu Cheeseburguer, o valor e:%f", quantidade*1.70);

        break;
        case '5':
        printf("Voce escolheu Suco, o valor e:%f", quantidade*2.20);

        break;
        case '6':
        printf("Voce escolheu Refrigerante, o valor e:%f", quantidade*1);

        break;
    
    default:
    printf("ERRO: Escolha entre 0 e 6");
        break;
    }
}