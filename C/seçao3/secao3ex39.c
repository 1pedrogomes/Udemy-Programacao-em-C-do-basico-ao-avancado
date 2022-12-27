#include <stdio.h>
int main (){
    float total, primeiro, segundo, terceiro;
    printf ("informe a quantia total:\n");
    scanf("%f", &total);
    primeiro= total*0.46;
    segundo= total*0.32;
    terceiro= total - (primeiro+segundo);
    printf ("O primeiro recebeu %.2f, o segundo recebeu %.2f, o terceiro recebeu %.2f", primeiro, segundo, terceiro);



}