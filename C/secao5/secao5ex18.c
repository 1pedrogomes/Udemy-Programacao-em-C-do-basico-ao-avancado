#include<stdio.h>
int main (){
    int entrada, numero, maior=0, menor=0, lidos=0, i=1, vezes=1;
    printf("Digite quantas entradas voce quer:\n");
    scanf("%d", &entrada);
    printf("Digite um numero:\n");
    scanf("%d", &numero);
        maior=numero;
 
    while (i<entrada)
    {
        
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        
        if (numero>maior)
        {
            maior=numero;
            vezes= 1;
             printf("vezes resetou: %d", vezes);
        }
       else if (numero==maior)
        {
            vezes=vezes+1;
        
        }
    
        i=i+1;
        
    }
     
        printf("Vezes em que o maior apareceu:%d\n", vezes);
        printf("O maior foi: %d\n", maior);
}