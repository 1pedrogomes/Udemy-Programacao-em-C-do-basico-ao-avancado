#include <stdio.h>
int main(){
    float f,c;
    printf("informe a temperatura em graus celsius\n");
    scanf("%f", &c);
    f= c *(9.0/5.0)+ 32;
    printf("A temperatura em Fahrenheit e %.2f", f);

}