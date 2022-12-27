#include <stdio.h>
int main(){
    int a[6], soma=0;
    a[0]= 1;
    a[1]= 0;
    a[2]= 5;
    a[3]= 100;
    a[4]= -5;
    a[5]= 7;
    soma= a[0]+a[1]+a[5];
    printf("A soma dessa soma e %d\n", soma);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
}