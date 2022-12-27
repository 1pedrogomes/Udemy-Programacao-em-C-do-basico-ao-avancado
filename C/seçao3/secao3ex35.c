#include <stdio.h>
int main (){
    float a,b, hipo;
    printf("Digite o valor do lado a\n");
    scanf("%f", &a);
    printf("digite o valor do lado b\n");
    scanf("%f", &b);
    hipo= sqrt(a*a+b*b);
    printf("%f e o valor da hipotenusa", hipo);

}