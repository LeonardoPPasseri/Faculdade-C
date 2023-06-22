#include <stdio.h>
#define NUM_CLIENTES 10573

struct banco{
    int qtd;
    float saldo;
};
typedef struct banco Tbanco;

void exibe(Tbanco vetor[],int clientes,float media){
    for(int c=0;c<clientes;c++){
        if(vetor[c].saldo > 0){
            printf("\n=============");
            printf("\nNumero da conta do cliente: %d\nSaldo: %.2f",vetor[c].qtd,vetor[c].saldo);
            if(vetor[c].saldo > media){
                printf("\nSaldo acima da media!!");
                printf("\n=============");
            }else{
                if(vetor[c].saldo == media){
                    printf("\nSaldo igual a media!!");
                    printf("\n=============");
                }else{
                    printf("\nSaldo menor que a media!");
                    printf("\n=============");
                }
            }
        }
    }
}

void inicializa(Tbanco vetor[],int clientes){
    for(int c=0;c<clientes;c++){
        vetor[c].qtd = 0;
        vetor[c].saldo = 0;
    }
}

int main(){
    Tbanco vetor[NUM_CLIENTES];
    int clientesArmazenados=0,cod,clientes=NUM_CLIENTES,c=0;
    float saldo,media,saldo_total = 0;

    inicializa(vetor,clientes);

    printf("Digite o codigo e o saldo do cliente: ");
    scanf("%d%f",&cod,&saldo);
       while(cod != 0){
            vetor[c].qtd = cod;
            vetor[c].saldo = saldo;
            clientesArmazenados++;
            saldo_total += saldo;
            printf("Digite o codigo e o saldo do cliente[0 para sair]: ");
            scanf("%d%f",&cod,&saldo);
            c++;
        }
    media = (saldo_total/clientesArmazenados);
    exibe(vetor,clientes,media);
    return 0;
}