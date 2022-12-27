#include <stdio.h>
int main () {
    float salario, novo;
    printf("Digite o salario do funcionario:\n");
    scanf("%f", &salario);
    novo= salario*0.25+salario;
    printf("O salario novo do funcionario e:\n%f", novo);

}