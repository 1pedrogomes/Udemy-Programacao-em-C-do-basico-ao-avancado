#include <stdio.h>
int main (){
    int num1,num2;
    printf("digite os numeros:\n");
   scanf("%d %d",&num1,&num2);
   if (num1>num2){
    printf("\no primeiro numero e maior que o segundo");
   }
   else if (num2>num1)
   {
    printf("\no segundo numero e maior que o primeiro");
   }
   else{
    printf("os numeros sao iguais");
   }
   
}