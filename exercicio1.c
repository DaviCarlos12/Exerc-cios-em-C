#include <stdio.h>

int main(){
    float num1, num2, resultado; 

    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);

    printf("Insira o segundo numero: ");
    scanf("%f" , &num2);

    resultado = num1+num2;

    printf("A soma dos numeros é: %f", resultado );

    return 0;
}