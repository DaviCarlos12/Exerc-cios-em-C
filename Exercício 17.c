#include <stdio.h>

int main(){

    int numeros;
    int contador = 0;

    for( int i = 0; i<80; i++){
        printf("digite o %d numero" , i +1);
        scanf("%d" ,  &numeros);


        if(numeros>= 10 && numeros<=150){
            contador++;

        }

    }
    printf("Existem %d numero(s) no intervalo de 10 e 150. \n", contador);

    return 0;
}
