#include <stdio.h>
int main (){
    float k,c;
    printf("diga a temperatura em kelvin\n");
    scanf("%f", &k);
    c= k-273.15;
    printf("a temperatura em graus celcius e %f", c);
}