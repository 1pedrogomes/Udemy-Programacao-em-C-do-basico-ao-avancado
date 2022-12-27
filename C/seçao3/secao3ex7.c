#include <stdio.h>
int main (){
    float f,c;
    printf("Diga a temperatura em Fahrenheit\n");
    scanf("%f", &f);
    c= 5.0 * (f-32.0)/9.0;
    printf("A temperatura em graus Celsius e %f", c);
}