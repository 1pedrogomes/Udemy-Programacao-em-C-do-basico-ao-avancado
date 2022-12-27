#include <stdio.h>
int main(){
    float nota1,nota2,nota3, media;
    printf("digite a nota1\n");
    scanf("%f", &nota1);
    printf("digite a nota2\n");
    scanf("%f", &nota2);
    printf("digite a nota3\n");
    scanf("%f", &nota3);
    media= ((nota1*1)+(nota2*1)+(nota3*2))/(1+1+2);
    if (media>=6.0)
    {
        printf("A media e %.2f, portanto foi aprovado", media);
    }
    else{
        printf("Reprovado pois a media foi de %.2f, portanto menor que 6", media);
    }
    
    
}