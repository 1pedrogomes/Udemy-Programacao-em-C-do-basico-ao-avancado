#include <stdio.h>
int main (){
 float nota1, nota2, nota3, nota4, media;
 printf("digite a primeira nota:\n");
 scanf("%f", &nota1);
 printf("digite a segunda nota:\n");
 scanf("%f", &nota2);
 printf("digite a terceira nota:\n");
 scanf("%f", &nota3);
 printf("digite a quarta nota:\n");
 scanf("%f", &nota4);
media= (nota1+nota2+nota3+nota4)/4;
printf("A media aritimetica e de: %f", media);


}