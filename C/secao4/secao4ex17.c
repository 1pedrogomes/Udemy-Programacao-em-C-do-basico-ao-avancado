#include <stdio.h>
int main(){
float basemaior, basemenor, altura, area;
printf("Digite o valor da base maior");
scanf("%f", &basemaior);
printf("Digite o valor da base menor");
scanf("%f", &basemenor);
printf("Digite o valor da altura");
scanf("%f", &altura);
area= (basemaior+basemenor)*altura/2;
printf("A area do trapezio e de %.2f", area);
if (basemaior<=0 && basemenor<=0)
{
    printf("As bases devem possuir valores maiores que 0");
}
}