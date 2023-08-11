#include <stdio.h>
#define MAX 10

//ALGORITMO DE ORDENAÇÃO INSERTION SORT(Crescente)

void Ordenador(int vetor[]){
    int aux=0,position=0,j;
    for(int i=1;i<=MAX-1;i++){
           j = i-1;
           aux = vetor[i];
        while(j>=0 && aux < vetor[j]){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
    //5 4 2
    //4 5 2
    //4 5 5
    //4 4 5
    //2 4 5
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