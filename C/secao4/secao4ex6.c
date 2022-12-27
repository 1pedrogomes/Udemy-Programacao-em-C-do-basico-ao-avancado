#include <stdio.h>
int main (){
    int num1, num2, diferenca;
    printf("\n digite os numeros:\n");
    scanf("%d %d", &num1, &num2);
    if (num1>num2){
        printf("\no primeiro numero e maior que o segundo");
        diferenca= num1-num2;
        printf("\n a diferenca deles e %d digitos", diferenca);
    }
    else if (num2>num1)
    {
       printf("\no segundo numero e maior que o primeiro");
       diferenca= num2-num1;
       printf("\n a diferenca deles e %d digitos", diferenca);
    }
    else{
printf("os numeros sao iguais\n");
diferenca= 0;
printf("a diferenca deles e %d digitos", diferenca);

    }
    
    
}