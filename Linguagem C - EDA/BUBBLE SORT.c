#include <stdio.h>
#define MAX 10

//ALGORITMO DE ORDENAÇÃO BUBBLE SORT(Crescente)

void Ordenador(int vetor[]){
    int aux;
    for(int i=0;i<(MAX-1);i++){
        for(int j=i+1;j<(MAX);j++){
            if(vetor[i]>vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
    //1 2 3 4 5 6 7 8 9 10
    //10 9 8 7 6 5 4 3 2 1
    
    //9 10
    //8 10 9
    //7 10 9 8
    //1 10 9 8 7 6 5 4 3 2

    //1 2 10 9 8 7 6 5 4 3
    //1 2 3 4 5 6 7 8
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
