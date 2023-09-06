#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 15

void buscaBinaria(int vetor[],int valor,int ini,int fim){
    if(ini <= fim){ //Ponto de parada
        int  meio = (ini + fim)/2;
        if(valor == vetor[meio]){
            printf("\nSeu valor esta na posicao %d",meio+1);
        }
        if(valor > vetor[meio]){
            buscaBinaria(vetor,valor,meio+1,fim); //meio+1 para pegar a parte a cima do meio
        }
        if(valor < vetor[meio]){
            buscaBinaria(vetor,valor,ini,meio-1);
        }
    }else{
        printf("\nSeu numero nao foi encontrado!");
    }
}

void ordenar(int vetor[]){
    int position,aux;
    for(int i=0;i<MAX-1;i++){
        position = i;
        for(int j=i+1;j<MAX;j++){
            if(vetor[position] > vetor[j]){
                position = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[position];
        vetor[position] = aux;
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
    int ini=0,fim=MAX-1;
    aleatoriedade(vetor);
    printf("\nVetor original: ");
    imprimir(vetor);

    ordenar(vetor);
    printf("\nVetor Ordenado: ");
    imprimir(vetor);

    printf("\nDigite o numero a ser procurado: ");
    scanf("%d",&valor);
    buscaBinaria(vetor,valor,ini,fim);

    return 0;
}
