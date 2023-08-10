#include <stdio.h>

int leValidaTipo(){
    int tipo;
    do{
        printf("1 - Fruta\n2 - Legume\n3 - Verdura");
        printf("Digite qual o tipo do produto:");
        scanf("%d",&tipo);
    }while(tipo < 1 || tipo > 3);
    return tipo;
}
int contador(int qtd,int *fruta,int *legume,int *verdura){
    int codigo,tipo;
    for(int c=0;c<qtd;c++){
        printf("Digite o codigo do produto:");
        scanf("%d",&codigo);
        tipo = leValidaTipo();
        if(tipo == 1){
            (*fruta)++;
        }else{
            if(tipo == 2){
                (*legume)++;
            }else{
                (*verdura)++;
            }
        }
    }
}
