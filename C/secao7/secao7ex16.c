#include <stdio.h>
int main(){
    float vetor[5];
    int size, escolha;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Digite %d valores que irao compor o vetor\n:", size);
        scanf("%f", &vetor[i]);
    }
    printf("Escolha 1 para visualizar o vetor na ordem direta e 2 para ordem inversa:\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
       for (int i = 0; i < size; i++)
       {
        printf("%.f", vetor[i]);
       }
       
        break;
    case 2:
       for (int i = size-1; i >= 0; i--)
       {
        printf("%.f", vetor[i]);
       }
       break;
    default:
    printf("Mona voce e maluca, mandei escolher entre 1 e 2");
        break;
    }
}