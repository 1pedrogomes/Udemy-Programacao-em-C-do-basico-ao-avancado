#include <stdio.h>
int main (){
    float adegrau, alcancar;
    int degraus;
    printf("informe a altura do degrau:\n");
    scanf("%f", &adegrau);
    printf("Digite a altura que o usuario deseja alcancar:\n");
    scanf("%f", &alcancar);
    degraus= (alcancar/adegrau);
    printf("A quantidade de degraus que devem ser subidos sao de:\n%d", degraus);


}