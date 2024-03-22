#include <stdio.h>

int main(){
    float RECEBA;

    printf("Insira um numero: ");
    scanf("%f", &RECEBA);

    if(RECEBA>100 && RECEBA<200){
        printf("Seu numero esta no intervalo de 100 e 200.");
    }
    else{
        printf("Seu numero nao  esta no intervalo de 100 e 200.");
    }

    return 0;
}