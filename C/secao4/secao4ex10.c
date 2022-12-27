#include<stdio.h>
int main(){
    float altura, peso_ideal;
    char s;
    printf("Digite o sexo:\n");
    scanf("%c", &s);
    
    printf("Digite a altura:\n");
    scanf("%f", &altura);
    if (s== "m" || (s== "M"))
    {
        peso_ideal= (72.7*altura)-58;
        printf("Seu peso ideal e: %f", peso_ideal);
    }
    else if (s== "F" || (s== "f"))
    {
     peso_ideal= (62.1*altura)-44.7;
     printf("Seu peso ideal e: %f", peso_ideal);
    }
    else{
printf ("genero invalido");
    } 
    
    
}