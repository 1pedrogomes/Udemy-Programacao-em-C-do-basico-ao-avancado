#include <stdio.h>
int main (){
    int idade;
    printf("qual a sua idade?\n");
    scanf("%d", &idade);
    if (idade < 18)
    printf("voce e menor de idade.\n");
    else if (idade > 18 && idade < 60){
        printf ("vc e adulto\n"); 
    }    else {
        printf ("voce e idoso\n.");
    }
    
    
    {
      printf ("sua idade e: %d", idade);  /* code */
    }
    
}