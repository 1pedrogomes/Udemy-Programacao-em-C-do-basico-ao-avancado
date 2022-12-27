#include<stdio.h> 
int main(){
    int i, ordem=0, n;
    printf("digite um numero:\n");
    scanf("%d", &n);
    for ( i = n; ordem <= n; i--)
    {
        ordem= ordem+1;
        printf("\n%d", i);
    }
    
}
