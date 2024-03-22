#include <stdio.h>

int main(){
    float num1, num2, soma, mult, div, sub;

    printf("Insira um numero:\n ");
    scanf("%f", &num1);

    printf("Insira um numero\n ");
    scanf("%f", &num2);

    sub = num1-num2;
    div = num1/num2;
    mult = num1*num2;
    soma = num1+num2;


    printf("A soma dos numeros e igual: %f\n" , soma);

    
    printf("A multiplicacao dos numeros e igual: %f\n" , mult);

    
    printf("A divisao dos numeros e igual: %f\n" , div);

    
    printf("A subtracao dos numeros e igual: %f\n" , sub);

    return 0;


}