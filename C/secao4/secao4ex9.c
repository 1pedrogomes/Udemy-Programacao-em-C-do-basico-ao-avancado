#include <stdio.h>
int main(){
    float salario, emprestimo;
    printf("Digite o salario\n:");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo:\n");
    scanf("%f", &emprestimo);
    if (emprestimo> 0.2*(salario)){
        printf("Emprestimo maior que 20 porcento do salario, portanto nao concedido\n");
    }
    else{
printf("Emprestimo concecido");
    }
    

}