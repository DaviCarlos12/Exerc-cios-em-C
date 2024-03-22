#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    char nome[100];

    printf("Insira aqui seu nome: ");
    scanf("%s", nome);

    printf("Insira sua nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Insira sua nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Insira sua nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    if(media>7){
        printf("APROVADO(A), %s", nome);
    }

    if(media<=5){
        printf("REPROVADO(A), %s", nome);
    }

    if(media<6.9 && media>5.1){
        printf("RECUPERACAO, %s", nome);
    }

    return 0;
}