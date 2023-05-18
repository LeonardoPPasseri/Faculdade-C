#include <stdio.h>

int leValidaTipo(){
    int tipo;
    do{
    printf("1-Fruta 2-Legume 3-Verdura");
    printf("Digite o tipo: ");
    scanf("%d",&tipo);

    }while(tipo < 1 || tipo > 3);
    return tipo;
}

void analizador(int qtd,int *qtdfruta,int *qtdlegume,int *qtdverdura){
    int cod,info;
    *qtdfruta = *qtdlegume = *qtdverdura = 0;
    printf("\nDigite o codigo: ");
    scanf("%d",&cod);

    for(int c = 0;c < qtd;c++){
        info = leValidaTipo();
        if(info == 1){
            (*qtdfruta)++;
        }else{
            if(info == 2){
                (*qtdlegume)++;
            }else{
                (*qtdverdura)++;
            }
        }
    }
}

