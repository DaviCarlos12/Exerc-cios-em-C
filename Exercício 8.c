#include <stdio.h>

int main(){
    float dolar, real, cotacao;

    printf("Insira aqui seu valor em dolar: ");
    scanf("%f", &dolar);

    printf("Insira aqui o valor da cotacao: ");
    scanf("%f", &cotacao);

    real = dolar * cotacao;

    printf("Seu valor em reais e de: %.2f", real);
     
    return 0;
}

