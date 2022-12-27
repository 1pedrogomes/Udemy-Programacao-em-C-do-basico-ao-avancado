//faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa.
// Voce deve criar um menu com as duas opções de conversão e com uma opção para finalizar o programa.
// O usuario deve fazer quantas conversões ele quiser, sendo que o programa só sera finalizado quando a opção de finalizar
//for escolhida.
#include<stdio.h>
int main(){
    int opcao;
    float conversor1=0, conversor2=0, k,m;
    printf("Qual opcao vc escolhe 1 converte km para ms; 2  ms para km, 3 para finalizar\n");
    scanf("%d", &opcao);
    if (opcao==3)
    {
       printf("programa fianlizado");
    }
    while (opcao!=3)
    {
       if (opcao==1)
       {
         printf("Digite o valor em km/h para converte-lo para m/s:\n");
            scanf("%f", &k);
            conversor1= k/3.6;
            printf("O valor em m/s e %.2f:\n", conversor1);
            printf("Escolha uma opcao:\n");
            scanf("%d", &opcao);
       }
       else if (opcao == 2)
       {
        printf("Digite o valor em m/s para converte-lo para km/h:\n");
            scanf("%f", &m);
            conversor2= m*3.6;
            printf("O valor em m/s e %.2f:\n", conversor2);
            printf("Escolha uma opcao:\n");
            scanf("%d", &opcao);
       }
       if (opcao==3)
       {
        printf("programa finalizado");
       }
       else{
        printf("Escolha uma opcao de 1 a 3 seu idiota: ");
        scanf("%d", &opcao);
        if (opcao==3)
        {
            printf("programa finalizado");
        }
        
       }
    }
}
    