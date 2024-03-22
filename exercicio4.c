#include <stdio.h>

int main(){

    float salario, total_vendas, salario_ajustado;
    char nome[100]; 

    printf("Insira o nome do vendedor: \n");
    scanf("%s" , &nome);

    printf("Insira o salario fixo do funcionario: \n");
    scanf("%f" , &salario);

    printf("Insira o total de vendas do funcionario (em dinheiro): \n");
    scanf("%f", &total_vendas);

    salario_ajustado = salario+(total_vendas*0.15);

    printf( "Seu salario neste mes sera de: %f \n " , salario_ajustado );

    return 0;

    
}