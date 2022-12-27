#include<stdio.h>
int main(){
    int soma=0, i, pares=0;
    for ( i = 0; pares < 50; i++)
    {
        if (i % 2 ==0)
        {
            pares= pares+1;
            soma+= i;
            

        }
       
    }
     printf("A soma dos pares sao:\n%d", soma);
}