//Chico tem 1,50 metro e cresce 2 cm por ano, enquanto zé tem 1,10 metros e cresce 3 centimetros por ano. Escreva um programa
//que calcule e imprima quantos anos serão necessário para que Zé seja maior Chico.
#include <stdio.h>
int main(){
    float chico, ze, crescimento_chico=0, crescimento_ze=0, ano;
    chico=1.5;
    ze=1.10;
    crescimento_chico= chico*0.2*ano+chico;
    crescimento_ze=ze*0.3*ano+ze;
    for (ano = 0; crescimento_ze < crescimento_chico ; ano++)
    {
        if (crescimento_chico<crescimento_ze)
        {
            printf("%f", ano);
        }
        
    }
    

}