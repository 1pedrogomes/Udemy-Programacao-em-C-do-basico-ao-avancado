#include <stdio.h>
int main () {
int numero, antecessor_do_dobro, sucessor_do_triplo;
float soma;
printf("digite o numero\n");
scanf("%d", &numero);
sucessor_do_triplo= (3*numero)+1;
antecessor_do_dobro= (2*numero)-1;
soma= sucessor_do_triplo+antecessor_do_dobro;
printf("O resultado e %f", soma);


}