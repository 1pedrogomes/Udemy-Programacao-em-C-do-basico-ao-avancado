//Faça um programa que simula o lançamento de dois dados d1 e d2, n vezes, e tem como saída o número de cada dado
//e a relação entre eles (>,<, =); de cada lançamento
#include<stdio.h>
int main (){
    int d1,d2=0;
    
    for (d1 = 0; d1 < 7; d1++)
    {
        printf("D1: %d\n", d1);
        while (d2<7)
        {
             
            printf("D2: %d\n", d2); 
        
        if (d1==d2)
    {
        printf("iguais: %d %d\n", d1, d2);
    }
    if (d1>d2)
    {
           printf("d1 e maior: %d %d\n", d1, d2);
    }
    if (d2>d1)
    {
        printf("D2 e maior: %d %d\n", d2, d1);
        
    }
  d2++;
    }
   
    
    }
    
}
//o problema desse código não é a logica e sim aonde colocar o d2++, veja, o while esta dentro do for, então para rodar 
//para um segundo for, ele espera o while acabar, dessa forma, o d2 não cresce concomitantemnte com o d1 como era o esperado

    
    
          
  
