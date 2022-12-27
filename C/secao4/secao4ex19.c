#include <stdio.h>
int main (){
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    if (num %3 == 0 && num %5==0)
    {
        printf("O numero %d e divisivel por ambos, escolha outro numero", num);
    }
    else if (num %3 == 0)
    {
        printf("O numero %d e divisivel por 3", num);
    }
    else if (num %5 ==0)
    {
        printf("O numero %d e divisel por 5", num);

    }else{
        printf("O numero nao e divisel nem por 3 nem por 5");
    }
    
    
}