//faça um programa que calcule a associação em paralelo de dois resistores R1 e R2 fornecidos pelo usuário via teclado.
//O programa fica pedindo estes valores e calculando até que o usuário entre com um valor para resistencia igual a 0
//r=r1*r2/r1+r2
#include<stdio.h>
int main(){
    float r=0, r1, r2;
    printf("Digite um valor para a resistencia 1 e 2\n");
    scanf("%f %f", &r1, &r2);
    r=(r1*r2)/(r1+r2);
    while (r1 && r2 >0)
    {
        printf("O valor de r e %.2f\n", r);
        printf("Digite um valor para a resistencia 1 e 2\n");
    scanf("%f %f", &r1, &r2);
     r=(r1*r2)/(r1+r2);
     
    }
    
}