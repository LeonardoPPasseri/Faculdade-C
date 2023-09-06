#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 15

void buscaSequencial(int vetor[],int valor){
    for(int i=0;i<MAX;i++){
        if(vetor[i] == valor){
            printf("\nO valor esta na posisao %d",i+1);
            break;
        }
        if(i == MAX-1){
            printf("\nO valor nao foi encontrado! ");
        }
    }
    
}

void aleatoriedade(int vetor[]){
    srand(time(NULL));
    for(int c=0;c<MAX;c++){
        vetor[c] = rand()%200;
    }
}
void imprimir(int vetor[]){
    for(int c=0;c<MAX;c++){
        printf("%d ",vetor[c]);
    }
}

int main(){
    int valor,vetor[MAX] = {0};
    aleatoriedade(vetor);
    printf("\nVetor original: ");
    imprimir(vetor);
    printf("\nDigite o numero a ser procurado: ");
    scanf("%d",&valor);
    buscaSequencial(vetor,valor);
    return 0;
}