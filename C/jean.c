#include <stdio.h>
int main (){
    int a, b, c, d, g,k=3,temporario=0, delta;
    float x1, x2, ponto_medio;
    
printf("Digite o valor do coeficiente a:\n");
scanf("%d", &a);
printf("Digite o valor do coeficiente b:\n");
scanf("%d", &b);
printf("Digite o valor do coeficiente c:\n");
scanf("%d", &c);
printf("Digite o valor da constante d:\n");
scanf("%d", &d);
printf("Digite o valor do grau do polinomio:\n");
scanf("%d", &g);
if (g==3)
{
        temporario=a*k+b;
        b=temporario;
        temporario=b*k+c;
        c=temporario;
        g=2;
}
if(g==2)
{
     delta = b*b - 4*a*c;
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 
 // Imprime os resultados
 if(delta < 0) {
 printf("A equacao nao possui raizes reais\n");
 } else {
 printf("O valor de x1: %.2fn", x1);
 printf("O valor de x2: %.2fn", x2);
 }
}
ponto_medio= (x1+x2)/2;


}