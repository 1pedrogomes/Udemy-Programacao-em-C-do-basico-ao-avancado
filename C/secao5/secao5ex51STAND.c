//Um funcionario recebe um aumento anual, em 1995 foi contratado por 2000 reais. Em 1996 recebeu aumento de 1,5%. A partir
// de 1997, os aumentos sempre corresponderam ao dobro do ano anterior. Faça um programa que determine o salário atual
//do funcionário.
#include<stdio.h>
int main(){
    int i;
    float ano=1996, funcionario, aumento=0; 
    funcionario=2000;
    for ( i = 1; ano <= 1997; i+=i*2)
    {
        aumento=2000*0.15*i+funcionario;
       ano=ano+1;
    }
     printf("O salario atual e: %.2f\n", aumento);
}