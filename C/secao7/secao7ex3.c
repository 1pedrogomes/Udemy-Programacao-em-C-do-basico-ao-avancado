#include<stdio.h>
int main(){
    float numeros[10], quadrado[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite 10 numeros\n");
        scanf("%f", &numeros[i]);

    }
    for ( i = 0; i < 10; i++)
    {
        quadrado[i]= numeros[i]*numeros[i];
        printf("%.2f\n", quadrado[i]);
    }
    
    
}