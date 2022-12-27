//faça um programa que calcule o menor numero divisivel por cada um dos numeros de 1 a 20? ex: 2520 é o menor numero
// que pode ser divido por cada um dos números de 1 a 10, sem sobrar resto.
#include <stdio.h>
int main(){
    int divisivel=0, i=0;
 while (divisivel<1)
 {
    i++;
    if (i % 1 ==0 && i %2 ==0 && i %3 ==0 && i %4 ==0 && i %5 ==0 && i %6 ==0 && i %7 ==0 && i %8 ==0 && i %9 ==0 && i %10 ==0 && i %11 ==0 && i %12 ==0 && i %13 ==0 && i %14 ==0 && i %15 ==0 && i %16 ==0 && i %17 ==0 && i %18 ==0 && i %19 ==0 && i %20 ==0 )
    {
        divisivel= divisivel+1;
        printf("O menor numero divisivel por cada um dos numeros de 0 a 20 e: %d", i);
    }
    
 }
 
}