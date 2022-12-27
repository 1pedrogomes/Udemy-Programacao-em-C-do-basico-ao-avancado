#include <stdio.h>
int main (){
    float altura, peso;
    printf("digite a altura e o peso:\n");
    scanf("%f %f", &altura, &peso);
    if (altura<1.20 && peso<=60)
    {
        printf("Vc esta no grupo A");
    }
    else if (altura<1.20 && peso>60 && peso<=90)
    {
        printf("Vc esta no grupo D");
    }
    else if (altura<1.20 && peso>90)
    {
         printf("Vc esta no grupo G");
    }
    else if (altura>=1.20 && altura<=1.70 && peso<=60)
    {
        printf("Vc esta no grupo B");
    }
    else if (altura>=1.20 && altura<=1.70 && peso>60 && peso<=90)
    {
        printf("Vc esta no grupo E");
    }
    else if (altura>=1.20 && altura<=1.70 && peso>90)
    {
        printf("Vc esta no grupo H");
    }
    else if (altura>1.70 && peso<=60)
    {
       printf("Vc esta no grupo C");
    }
    else if (altura>1.70 && peso>60 && peso<=90)
    {
        printf("Vc esta no grupo F");
    }
    else if (altura>1.70 && peso>90)
    {
        printf("Vc esta no grupo I");
    }
    
    
    
    
    
    
    
    
}