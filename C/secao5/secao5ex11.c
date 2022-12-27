#include<stdio.h>
int main(){
int n, ordem=0, i;
printf("Digite um numero:");
scanf("%d", &n);
for ( i = 0; ordem < n; i++)
{
    ordem= ordem+1;
    printf("%d", i);
}

}