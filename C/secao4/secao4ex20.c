#include <stdio.h>
int main (){
    float a, b, c;
    printf("Digite 3 valores\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b<c || a+c<b || b+c<a)
    {
         printf("Nao e um triangulo");
    }   
    else if (a==b && a==c)
    {
        printf("Esse e um triangulo equilatero");
    }
    else if (a==b || a==c || b==c)
    {
        printf("Esse e um triangulo isosceles");
    }
    else if (a!=b && a!=c && b!=c)
    {
        printf("Esse e um triangulo escaleno");
    }
     
    
}