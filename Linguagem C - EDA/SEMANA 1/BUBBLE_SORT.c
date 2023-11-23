#include <stdio.h>
#define MAX 5

//ALGORITMO DE ORDENAÇÃO BUBBLE SORT(Crescente) 

//Em ordem decrescente -> Alterar vetor[i]<vetor[j]

void Ordenador(int vetor[]){
    int aux;
    for(int i=0;i<(MAX-1);i++){
        for(int j=i+1;j<(MAX);j++){
            printf("\n%d e %d",i,j);
            if(vetor[i]>vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
    printf("O vetor ficou assim: ");
    for(int c=0;c<MAX;c++){
        printf("\n%d",vetor[c]);
    }
}

void inicializador(int vetor[]){
    for(int c=0;c<MAX;c++){
        vetor[c]=0;
    }
}

int main(){
    int vetor[MAX];
    inicializador(vetor);
    printf("Digite os numeros: ");
    for(int c=0;c<MAX;c++){
        scanf("%d",&vetor[c]);
    }
    Ordenador(vetor);
    return 0;
}
