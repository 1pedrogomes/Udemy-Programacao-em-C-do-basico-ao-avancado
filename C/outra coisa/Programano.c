#include <stdio.h>

int main (){
    int num1, num2, soma, multiplicacao;
    printf ("informe o primeiro numero:");
    scanf("%d", &num1);

    printf("informe o segundo numero:");
    scanf("%d", &num2);
    
    soma= num1 + num2;
    multiplicacao= soma * num1;
    
    printf("o resultado da multiplicacao e %d", multiplicacao); 
}