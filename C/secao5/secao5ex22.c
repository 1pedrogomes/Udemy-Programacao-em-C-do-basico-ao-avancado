#include<stdio.h>
int main(){
int notas;
float media=0, i=1, soma=0; 
printf("Insira sua nota:");
scanf("%d", &notas);
soma+=notas;
while (notas<10||notas>20)
{
    printf("ERRO, NOTAS DEVEM SER ENTRE 10 E 20\n");
  printf("Insira sua nota:");
scanf("%d", &notas);
}

while (notas >= 10 && notas <=20)
{
    printf("Insira sua nota(s):\n");
    scanf("%d", &notas);
i=i+1;
soma+=notas;
media=soma/i;
}

printf("Sua media e:%f\n", media);


}