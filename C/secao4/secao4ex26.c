#include <stdio.h>
int main(){
float km, l;
printf("Diga a distancia em km do percurso e a gasolina gasta\n");
scanf("%f %f", &km, &l);
if (km/l<8)
{
   printf("VENDA O CARRO");
}
else if (km/l>=8 && km/l<=14)
{
    printf("ECONOMICO");

}
else if (km>12)
{
    printf("SUPER ECONOMICO");
}

}