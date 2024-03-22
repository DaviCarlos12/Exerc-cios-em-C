#include<stdio.h>

int main(){
    float num1, num2;

    printf("Insira seu primeiro numero: \n");
    scanf("%f", &num1);
    
    printf("Insira seu segundo numero: \n");
    scanf("%f", &num2);

    if (num1>num2){
        printf("O numero maior e: %.0f", num1);
    }

    if (num2>num1){
        printf("O numero maior e: %.0f", num2);
    }

    if (num2==num1){
        printf("Nao.");
    
    }
    return 0;
}