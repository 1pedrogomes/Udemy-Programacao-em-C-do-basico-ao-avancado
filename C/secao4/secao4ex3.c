#include <stdio.h>
int main (){
    float numero, raiz, quadrado;
    printf("digite um numero:\n");
    scanf("%f", &numero);
    if (numero>0) {
        raiz=sqrt(numero);
      printf("o numero e maior que 0, portanto raiz=%.2f\n", raiz);
    }
    else{
quadrado= numero*numero;
    printf("o numero e menor que 0,  portanto quadrado=%2.f\n", quadrado);
    }
    
    
    
}