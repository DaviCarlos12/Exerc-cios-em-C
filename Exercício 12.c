#include <stdio.h>

int main(){
    float preco_fab, impost, dist, preco_fin;

    printf("Insira o valor de fabrica: ");
    scanf("%f", &preco_fab);

    impost= preco_fab*0.45;
    dist= preco_fab*0.28;
    preco_fin= preco_fab+impost+dist;

    printf("O valor final ficou em: %.2f", preco_fin);

    return 0;
}