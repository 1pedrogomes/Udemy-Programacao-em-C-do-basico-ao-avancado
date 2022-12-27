#include <stdio.h>
int main (){
    float valor_total, desconto, parcelasj, comissao, comissaopar;
    printf("digite o valor total:\n");
    scanf("%f", &valor_total);
    desconto= valor_total-(valor_total*0.1);
    printf("O total a pagar com o desconto e de %f", desconto);
    parcelasj= valor_total/3;
    printf("O valor das parcelas sem juros fica de:\n %f", parcelasj);
    comissao= desconto*0.05;
    printf("A comissao do vendedor sobre a venda a vista e de %f", comissao);
    comissaopar= valor_total*0.05;
    printf("A comissao sob a venda parcelada e de %f", comissaopar);

}