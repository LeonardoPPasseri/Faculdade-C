#include <stdio.h>
#define NUM_NOTAS 11

void inicializa(int vetor[],int tamanho){
    for(int c=0;c<tamanho;c++){
        vetor[c] = 0;
    }
}

void exibe(int vetor[],int tamanho){
    for(int c=0;c<tamanho;c++){
        printf("\nNota %d: %d",c,vetor[c]);
    }
}

int main(){
    int nota,vetor[NUM_NOTAS],tamanho = NUM_NOTAS;
    inicializa(vetor,tamanho);
    printf("Digite a nota do aluno: ");
    scanf("%d",&nota);
    do{
        if(nota > 10 || nota < -1){
            printf("ERRO!\n");
        }else{
            for(int c=0;c<tamanho;c++){
                if(nota == c){
                    vetor[c]++;
                }
            }
        }
        printf("Digite a proxima nota[-1 para sair]: ");
        scanf("%d",&nota);
    }while(nota != -1);
    exibe(vetor,tamanho);
    return 0;
}
