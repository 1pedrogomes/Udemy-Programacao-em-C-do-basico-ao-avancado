#include<stdio.h>
int main(){
    float nota[15], soma=0, media=0;
    for (int i = 0; i < 15; i++)
    {
        printf("digite a nota de 5 alunos:\n");
        scanf("%f", &nota[i]);
        soma= soma + nota[i];
        media= soma/15;
            
        
    }
    printf("%.2f", media);
    
}