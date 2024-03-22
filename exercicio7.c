#include <stdio.h>

int main(){

    float celsius, convertida;

    printf("Insira uma temperatura em celsius: \n ");
    scanf("%f" , &celsius);

    convertida = 9*celsius+160/5;

    printf("A temperatura em fahrenheit e: " , convertida );

    return 0;
    

}