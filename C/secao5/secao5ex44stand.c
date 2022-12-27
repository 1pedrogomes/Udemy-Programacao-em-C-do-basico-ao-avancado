//Leia um numero positivo do usuário, então calcule e imprima a sequência fibonacci até o primeiro número superior ao numero
//lido. Exemplo: se o usuario informou o numero 30 logo a sequencia a ser impressa é: 1 1 2 3 5 8 13 21 34
#include <stdio.h>
int main(){
    int numero, sequencia=1, i;
    printf("digite um numero:\n");
    scanf("%d", &numero);
    for ( i = 1; sequencia < numero; i++)
    {
          sequencia= i-1 + i-2;
    
         printf("sequencia e: %d\n", sequencia);
    }
    
      
   
   

}