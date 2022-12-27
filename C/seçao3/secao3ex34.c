#include <stdio.h>
int main (){
    float raio, area;
    printf("digite o valor do raio do circulo:\n");
    scanf("%f", &raio);
    area= (raio*raio)*3.141592;
    printf("%f é o valor da area do circulo", area);

}