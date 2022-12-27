#include <stdio.h>
int main (){
    float a, b, c;
    printf("digite 3 numeros aleatorios:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b && b>c)
    {
        printf("A ordem crescente e:%f, %f, %f", a, b, c);
        
    }else if (a>c && c>b)
    {
        printf("A ordem crescente e:%f, %f, %f", a, c, b);
        
    }
    
    else if (b>c &&c>a)
    {
         printf("A ordem crescente e:%f, %f, %f", b, c, a);
    }
    else if (c>b && b>a)
    {
        printf("A ordem crescente e:%f, %f, %f", c, b, a);
    }
    else if (c>a && a>b)
    {
        printf("A ordem crescente e:%f, %f, %f",  c, a, b);
        
    }
    
    else if (b>a && a>c)
    {
         printf("A ordem crescente e:%f, %f, %f",  b, a, c);
    }
    
    
    
    
}