#include <stdio.h>
int main(){
float numero, antecessor, sucessor;
printf("digite um numero\n");
scanf("%f", &numero);
antecessor= numero-1;
sucessor= numero+1;
printf("%.1f e o antecessor, o sucessor e %.1f\n", antecessor, sucessor);

}