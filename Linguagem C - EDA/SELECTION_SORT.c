#include <stdio.h>
#define MAX 10

//ALGORITMO DE ORDENAÇÃO SELECTION SORT(Crescente)

void Ordenador(int vetor[]){
    int aux=0,position;
    for(int i=0;i<(MAX-1);i++){
            position = i;
        for(int j=i+1;j<(MAX);j++){
            if(vetor[i]>vetor[j]){
                i = j;
            }
        }
        aux = vetor[position];
        vetor[position] = vetor[i];
        vetor[i] = aux;
        i = position;
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
