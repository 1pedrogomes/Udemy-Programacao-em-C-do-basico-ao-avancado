#include<stdio.h>
int main (){
    float raiz1, raiz2, a, b, c, delta;
printf("Digite o valor de a, b e c\n");
scanf("%f %f %f", &a, &b, &c);
delta= (b*b - (4*a*c));
raiz1= (-b+sqrt(delta)/2*a);
raiz2= (-b-sqrt(delta)/2*a);

if (delta<0)
{
    printf("Nao existe raiz");
}
else if (a==0)
{
   printf("nao e uma equacao do 2 grau");
}

else if (delta==0)
{
    printf("raiz unica: %.f", raiz1);
}
else if (delta>0)
{
    printf("As raizes sao: %f e %f", raiz1, raiz2);
}



}