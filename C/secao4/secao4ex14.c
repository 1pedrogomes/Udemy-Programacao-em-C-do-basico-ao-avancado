#include<stdio.h>
int main(){
    float lab, av, ef, media;
    printf("digite a nota do Trabalho de Laboratorio\n");
    scanf("%f", &lab);
    printf("digite a nota da Avaliacao semestral\n");
    scanf("%f", &av);
    printf("digite a nota do Exame Final\n");
    scanf("%f", &ef);
    media= (lab+av+ef)/3;
    if (media>=6 && media<=10)
    {
        printf("media foi de %.2f, aprovado", media);
    }
    else if (media>=0 && media <=2.9)
    {
        printf("media foi de %.2f, reprovado", media);

    }else if (media>= 3 && media <=4.9)
    {
        printf("A media foi de %.2f, recuperacao", media);
    }else{
        printf("Digite um valor de 0 a 10");
    }
    
    
    

}