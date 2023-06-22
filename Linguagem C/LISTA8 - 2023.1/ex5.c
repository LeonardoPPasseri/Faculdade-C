#include <stdio.h>
#define NUM_PROD 3

struct mercado{
    int cod;
    float valor;
};
typedef struct mercado Tmercado;

void inicializa(Tmercado vetor[]){
    for(int c=0;c<NUM_PROD;c++){
        vetor[c].cod = 0;
        vetor[c].valor = 0;
    }
}

void leitura(Tmercado vetor[]){
    int cod;
    float valor;
    for(int c=0;c<NUM_PROD;c++){
        printf("Digite o codigo e o valor do produto: ");
        scanf("%d%f",&cod,&valor);
        vetor[c].cod = cod;
        vetor[c].valor = valor;
    }
}

int busca(Tmercado vetor[],int codigo){
    int base = -1;
    for(int c=0;c<NUM_PROD;c++){
        if(codigo == vetor[c].cod){
            return vetor[c].valor;
        }
    }
    return base;
}

int main(){
    Tmercado vetor[NUM_PROD];
    inicializa(vetor);
    leitura(vetor);
    int cod;
    float valor;
    printf("Qual o codigo do produto? ");
    scanf("%d",&cod);
    do{
        valor = busca(vetor,cod);
        if(valor == -1){
            printf("Nao foi encontrado!");
        }else{
            printf("O valor do produto: %.2f",valor);
        }
        printf("Qual o codigo do produto[0 para sair]? ");
        scanf("%d",&cod);
    }while(cod != 0);
    return 0;
}