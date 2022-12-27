#include<stdio.h>
int main(){
    float vetor[5];
for (int i = 0; i < 5; i++)
{
    vetor[i]= (i+5*i) % (i+1);

    printf("%.f\n", vetor[i]);
}

}