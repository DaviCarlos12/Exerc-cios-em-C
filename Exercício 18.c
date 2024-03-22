#include <stdio.h>

int main(){
    int idade;
    
    for (int i=0; i<75; i++){
        printf("Idade pessoa %d: ", i+1);
        scanf("%d", &idade);

        if(idade >=18){
            printf("Maior de Idade\n");
        
        }else {
            printf("Menor de idade\n");
        }
    }



    return 0;
}
