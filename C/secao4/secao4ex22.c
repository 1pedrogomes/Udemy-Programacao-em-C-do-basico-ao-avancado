#include <stdio.h>
int main(){
int idade, tempo;
printf("Digite a idade do trabalhador e o tempo trabalhado\n");
scanf("%d %d", &idade, &tempo);
if (idade>=65 || tempo>=30 || idade>=60 && tempo>=25)
{
    printf("Pode se aposentar");
}
else if (tempo>idade)
{
    printf("impossivel o tempo de trabalho ser maior que a idade");
}

else{
    printf("Nao pode se aposentar");
} 

}

