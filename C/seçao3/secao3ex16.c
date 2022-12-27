#include <stdio.h>
int main (){
float p,c;
printf("digite o valor em polegadas:\n");
scanf("%f", &p);
c= p*2.54;
printf("o valor em centimetros e %.2f", c);
}