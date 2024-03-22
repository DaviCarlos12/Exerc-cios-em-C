#include <stdio.h>

int main(){
    float valor, prestacao;

    printf("Insira aqui o valor do produto: ");
    scanf("%f", &valor);

    prestacao=valor/5;

    printf("O valor de cada prestacao sera de: %.2f", prestacao);

    return 0;
}
