#include <stdio.h>

int main(){
    char nome[100];
    float nota1, nota2, nota3, media_notas;

    printf("Insira o nome do aluno: \n "); 
    scanf("%s" , &nome);

    printf("Insira a primeira nota: \n ");
    scanf("%f" , &nota1);

    printf("Insira a segunda nota: \n ");
    scanf("%f" , &nota2);

    printf("Insira a terceira nota: \n ");
    scanf("%f" , &nota3);

    media_notas = (nota1+nota2+nota3)/3;

    printf("A media do aluno foi: %f" , media_notas);

    return 0;



}
