#include <stdio.h>
#include <math.h>
int main(){
int x, y, z;
char operacao;
printf("Escolha uma das opcoes para calculo de media: a -> Geometrica, b -> Ponderada, c-> Harmonica, d - Aritmetica\n");
scanf("%c", &operacao);
printf("Digite os 3 numeros em ordem:\n");
scanf("%d %d %d", &x, &y, &z);
switch (operacao)
{
case 'a':
     printf("A media geometrica e %f", cbrt(x*y*z));
     
    break;
case 'b':

     printf("A media Ponderada e %d", (x+2*y+3*z)/2);
    break;
    case 'c':

     printf("A media Harmonica e %d", 1/(1/x+1/y+1/z));
    break;
    case 'd':

     printf("A media Aritimetica e %d", (x+y+z)/3);
    break;
default:
printf("ERRO: Digite uma das operacoes");
    break;
}

}