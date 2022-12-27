#include <stdio.h>
int main (){
    float nota1, nota2, media;
printf("Digite suas notas:\n");
scanf("%f %f", &nota1, &nota2);
if (nota1 >0 && nota2 > 0 && nota1 <10  && nota2 < 10){
    media= (nota1+nota2)/2;
    printf("Sua media foi %.2f", media);
}else{
    printf("Valor invalido, digite um valor entre 0 e 10");
}

}