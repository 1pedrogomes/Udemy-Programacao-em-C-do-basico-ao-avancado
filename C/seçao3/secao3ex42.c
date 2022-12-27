#include <stdio.h>
int main (){
    float salario_base, salario_receber;
    printf("digite o salario base:\n");
    scanf("%f", &salario_base);
    salario_receber= salario_base+(salario_base*0.05)-(salario_base*0.07);
    printf("o salario a receber e de:\n %.2f", salario_receber);

}