#include <stdio.h>
int main (){
    int numero, soma1, digito, soma2;
    soma1= 0;
    soma2=0;
    printf("Digite o numero\n");
    scanf("%d", &numero);
    if (numero>0)
    {
       digito= numero % 10;
       soma1= ((numero/10)%10) + digito;
       soma2= (numero/100)+soma1;
       printf("A soma dos algarismos do numero eh %d", soma2);
    }
    else{
        printf("O numero deve ser maior que 0");
    }
    
}