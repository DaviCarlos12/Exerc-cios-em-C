#include <stdio.h>

int main(){
    float valor, acresc, final;

    printf("Insira aqui o valor da venda: ");
    scanf("%f", &valor);

    printf("Insira aqui o valor do acrecimo: ");
    scanf("%f", &acresc);

    final=valor+acresc;

    printf("O VALOR FINAL DA COMPRA FICOU EM: %.2f", final);

    return 0;
}