#include <stdio.h>

int main(){

    float distancia, combustivel, consumo_medio; 

    printf("Insira a distancia percorrida: \n ");
    scanf("%f" , &distancia);

    printf("Insira o combustivel gasto: \n ");
    scanf("%f" , &combustivel);

    consumo_medio = distancia/combustivel;
    
    printf("O consumo medio foi de: %f \n" , consumo_medio );

    return 0;

}