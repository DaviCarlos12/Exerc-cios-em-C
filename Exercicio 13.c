#include <stdio.h>

int main() {
    float num;

    printf("Insira um numero: ");
    scanf("%f", &num);

    if(num>10){
        printf("Seu numero e maior que 10.");
    } 
    else{
        printf("Seu numero nao e maior que 10.");
    }

    return 0;
}