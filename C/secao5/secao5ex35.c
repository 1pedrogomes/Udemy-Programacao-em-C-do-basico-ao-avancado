//Faça um programa que some numeros os numeros impares contidos em um intervalo definido pelo usuario.
//O usuario deve definir o valor inicial e final do intervalo e o programa deve somar todos os impares em tal intervalo.
#include <stdio.h>
int main (){
    int primeiro, segundo, i, g=0, soma=0;
    printf("Digite o valor inicial do intervalo\n");
    scanf("%d", &primeiro);
    printf("Digite o valor final do intervalo\n");
    scanf("%d", &segundo);
    while (primeiro == 0 || segundo == 0)
    {
     printf("ERRO CARALHO, O INTERVALO DEVE SER DIFERENTE DE 0");
      printf("Digite o valor inicial do intervalo\n");
    scanf("%d", &primeiro);
    printf("Digite o valor final do intervalo\n");
    scanf("%d", &segundo);
    }
    for ( i = primeiro; i <= segundo ; i++)
    {
        if (i % 2 !=0)
        {
           g=i;
           soma+= g;
        }
        
    }
    
    printf("A soma dos intervalos e : %d", soma);
} 