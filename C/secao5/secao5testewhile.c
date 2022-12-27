#include<stdio.h>
int main(){
int num, soma=0;
while(num!=0){
printf("digite um numero:\n");
    scanf("%d", &num);
soma= soma+num;
}
printf("A soma e %d\n", soma);
}