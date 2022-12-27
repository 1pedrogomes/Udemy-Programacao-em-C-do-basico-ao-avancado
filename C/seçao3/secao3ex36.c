#include <stdio.h>
int main () {
    float raio, altura, volume;
    printf ("informe a altura do cilindro:\n");
    scanf("%f", &altura);
    printf("informe o raio do cilindro:\n");
    scanf("%f", &raio);
    volume= 3.141592*(raio*raio)*altura; 
    printf("%f e o volume do cilindro", volume);

}