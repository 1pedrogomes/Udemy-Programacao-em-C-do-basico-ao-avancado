//O funcionário chamado Carlos tem um colega chamado joão, que recebe um salário que equivale a um terço de seu salário.
// Carlos gosta de fazer aplicações na caderneta de poupança e vai aplicar seu salário integralmente nela, pois está
//rendendo 2% ao mês.
//João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. Construa um programa
//que deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse
//O valor pertencente a Carlos. Teste com outros valores para as taxas.
#include<stdio.h>
int main(){
    int meses=0;
   float carlos, joao, taxa_carlos=0, taxa_joao=0;
   printf("Digite um salario para carlos:\n");
   scanf("%f", &carlos);
    joao=carlos/3;
    taxa_carlos= (carlos*0.02)+carlos;
    taxa_joao= (joao*0.05)+joao;

   while (taxa_joao<taxa_carlos)
   {
      taxa_carlos+= (carlos*0.02)+carlos;
      taxa_joao+= (joao*0.05)+joao;

        if (taxa_carlos<=taxa_joao)
        {
            printf("%d", meses);
        }
        meses++;
   }

      
        
    }
    
    
