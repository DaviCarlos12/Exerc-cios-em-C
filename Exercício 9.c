#include <stdio.h>

int main(){
    float valor, reajuste;

    printf("Insira o valor dapositado: ");
    scanf("%f", &valor);

    reajuste = valor * 0.007;

    printf("O valor reajustado foi: %.2f", valor + reajuste);

    return 0;
}
