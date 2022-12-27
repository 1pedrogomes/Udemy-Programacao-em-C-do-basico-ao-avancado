#include<stdio.h>
int main (){
    int pares=0, soma=0, i=0;
    while (pares<50)
    {
        
        if (i % 2 ==0)
        {
            pares= pares+1;
            soma += i;
           
        }
        i++;
        
    }
     printf("%d", soma);
}