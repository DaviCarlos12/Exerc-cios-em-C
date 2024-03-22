#include <stdio.h>

int main(){
    
    char nome[50];
    int sexo;
    int contador1 = 0;
    int contador2 = 0;

    for( int i = 0; i<56; i++){


        printf("digite seu nome: \n", i + 1);
        scanf("%s" ,  nome);

        printf("digite seu sexo: (1 para masc e 2 para fem) \n");
        scanf("%d" ,  &sexo);


        if(sexo == 1){
            contador1++;

        } 
        else{
            contador2++;
        }


    }
    printf("Existem %d Homens \n", contador1);
    printf("Existem %d Mulheres \n", contador2);


    return 0;
}