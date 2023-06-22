#include <stdio.h>
#define NUM_DEP 11
#define NUM_FUNC 2
struct dept{
    int qtd;
    float soma;
};
typedef struct dept Tdept;

void inicializa(Tdept vetor[],int tamanho){
    for(int c=0;c<tamanho;c++){
        vetor[c].qtd = 0;
        vetor[c].soma = 0;
    }
}

void exibe(Tdept vetor[], int tamanho) {
    float media;
    for (int c = 0; c < tamanho; c++) {
        media = vetor[c].soma/vetor[c].qtd;
        if(vetor[c].soma > 1){
            printf("\nDepartamento %d tem media de idade igual a: %.2f",c+10, media);
        }else{
            printf("\nDepartamento %d nao possui funcionario!",c+10);
        }
    }
}

int main(){
    int codigo;
    float idade;
    Tdept vetor[NUM_DEP];
    inicializa(vetor,NUM_DEP);
    for(int c=0;c<NUM_FUNC;c++){
        printf("Digite o codigo[10 ao 20] do departamento e a idade do funcionario: ");
        scanf("%d%f",&codigo,&idade);
        vetor[codigo - 10].soma += idade;
        vetor[codigo - 10].qtd++;
    }
    exibe(vetor,NUM_DEP);
    return 0;
}