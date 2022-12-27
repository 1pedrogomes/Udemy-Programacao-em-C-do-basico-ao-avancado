#include <stdio.h>
int main(){
    int valor;
    printf("digite um valor de 1 a 7\n");
    scanf("%d", &valor);
    switch (valor)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
    printf("Segunda");
    break;
    case 3: 
    printf ("Terca");
    break;
    case 4:
    printf("Quarta");
    break;
    case 5:
    printf("Quinta");
    break;
    case 6:
    printf("Sexta");
    break;
    case 7:
    printf("Sabado");

        break;
    
    default: 
    printf("ERRO: valor invalido, escolha entre 1 e 7\n");
        break;
    }

}