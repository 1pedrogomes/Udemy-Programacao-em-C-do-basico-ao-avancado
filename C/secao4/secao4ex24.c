#include <stdio.h>
int main(){
    float valor;
    char estado;
    printf("Digite o estado do produto: 1 para MG, 2 para SP, 3 para RJ, 4 para MS\n");
    scanf("%c", &estado);
    printf("Digite o valor do produto\n");
    scanf("%f", &valor);
    switch (estado)
    {
    case '1':
        printf("O estado escolhido foi MG e possui 7 porcento de taxa ficando: %.2f", (valor*0.07)+valor);

        break;
        case '2':
        printf("O estado escolhido foi SP e possui 12 porcento de taxa ficando %.2f", (valor*0.12)+valor);
        break;
        case '3':
        printf("O estado escolhido foi RJ e possui 15 porcento de taxa ficando %.2f", (valor*0.15)+valor);
        break;
        case '4':
        printf("O estado escolhido foi MS e possui 8 porcento de taxa ficando %.2f", (valor*0.08)+valor);
        break;
    
    default:
    printf("ERRO: ESTADO DIGITADO NAO E VALIDO");
        break;
    }
}