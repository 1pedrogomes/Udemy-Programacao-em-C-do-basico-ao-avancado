//dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem crescente os n primeiros
//naturais que são multiplos de i ou de j e ou de ambos. Exemplo: para n=6, i=2, j=3 a saida deverá ser:
//0,2,3,4,6,8;
#include <stdio.h>
int main(){
int n, i, j, z=0;
printf("Digite a quantia de numeros naturais que vao ser os multiplos de i ou de j\n");
scanf("%d", &n);
printf("Digite o primeiro multiplo\n");
scanf("%d", &i);
printf("Digite o segundo multiplo\n");
scanf("%d", &j);
while (i==0||j==0)
{
    printf("BURRO, OS MULTIPLOS NAO PODEM SER 0\n");
    printf("Digite o primeiro multiplo\n");
scanf("%d", &i);
printf("Digite o segundo multiplo\n");
scanf("%d", &j);
}
for (z = 0; z <= n; z++)
{
   if (z % i ==0 || z % j ==0)
   {
    printf("%d", z);
   }
  
}



}
//o codigo funciona e está na direção correta, porem ao inves de imprimir os 6 primeiros naturais ele imprime só ate 5
// teste pelos numeros do exemplo n=6, i=2, j=3
// ja sei o que é, ele ta contando com o 5 assim ficam completos 6, faça de uma forma que o for so sobe se entrar na condição
//acho que teria de usar while.
//
