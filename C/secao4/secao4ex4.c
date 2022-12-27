#include <stdio.h>
int main (){
    float num, raiz, quadrado;
    printf ("digite um numero:\n");
    scanf("%f", &num);
    if (num>0){
        raiz= sqrt(num);
        quadrado= num*num;
        printf("A raiz e o quadrado do numero digitado sao: %.2f e %.2f", raiz, quadrado);
    }else
    printf("o numero digitado deve ser positivo\n");
    
}