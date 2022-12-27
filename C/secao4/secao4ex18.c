#include <stdio.h>
int main(){
    float numero1, numero2;
    char o;
        printf("digite uma operacao matematica: 1 para soma, 2 para subtracao, 3 para divisao ou 4 para multiplicacao\n");
    scanf("%c", &o);
     printf("Digite dois numeros\n");
        scanf("%f %f", &numero1, &numero2);
    if (o=='1'){
                printf("O resultado da soma e: %.2f", numero1+numero2);
        
    }
    if (o=='2'){

        printf("O resultado da subtracao e: %.2f", numero1-numero2);
    }
    if (o=='3'){
        
        printf("O resultado da divisao e: %.2f", numero1/numero2);
    }
    if (o=='4'){
        printf("O resultado da multiplicacao e: %.2f", numero1*numero2);

    }
    
}