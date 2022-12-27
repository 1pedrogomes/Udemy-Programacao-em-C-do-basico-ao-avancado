#include <stdio.h>
int main (){
    int a, b, certas;
    float soma, resp, m, d, divisao, multiplicacao;
    soma= a+b;
    resp= soma;
    certas=0;
    d= (a/b);
    m= (a*b);
    divisao= d;
    multiplicacao= m;
    printf("Escolha dois numeros entre 1 e 100\n");
    scanf("%d %d", &a, &b);
    printf("Qual a soma de a e b?\n");
    scanf("%f", &resp);
    printf("Qual a divisao de a e b?\n");
    scanf("%f", &divisao);
    printf("Qual a multiplicacao de a e b?\n");
    scanf("%f", &multiplicacao);
    if (resp=soma)
    {
       printf("voce acertou, a resposta certa e %d\n", a+b);
    }
    else if (resp!=soma)
    {
        
         printf("Voce errou, a resposta certa e %d\n", a+b);
         
    }
 if (divisao!=d)
    {
        printf("Voce errou, a resposta certa e %d\n", a/b);
    }
    else if (divisao=d)
    {
        printf("Voce acertou, a resposta certa e %d\n", a/b);
     
    }
 if (multiplicacao!=m)
    {
        printf("Voce errou, a resposta certa e %d\n", a*b);
    }
    else if (multiplicacao=m)
    {
        printf("Voce acertou, a resposta certa e %d\n", a*b);
        
    }
 
    
}