#include <stdio.h>
int main (){
    int dias;
    float qtl;
    printf("digite a quantidade de dias trabalhados:\n");
    scanf("%d", &dias);
    qtl= dias*30-((dias*30)*0.08);
    printf("A quantia liquida que devera ser paga e:\n%f", qtl);
    
}