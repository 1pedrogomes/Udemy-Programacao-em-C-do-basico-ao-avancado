#include<stdio.h>
int main(){
    int multiplos=0, numero;
    for (numero = 1; multiplos < 5; numero++)
    {
        if (numero % 3 ==0)
        {
            multiplos= multiplos+1;
            printf("%d\n", numero);
        }
        
    }
}