/* Elabore um programa que leia 50 números inteiros (sem repetição),
classifique-os em ordem crescente usando os três métodos de ordenação
(Bubble Sort, Selection Sort e Insertion Sort). */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 50

void troca(int vetor[],int aux2,int aux3){
    int aux = vetor[aux2];
    vetor[aux2] = vetor[aux3];
    vetor[aux3] = aux;
}
void imprimir(int vetor[]){
    for(int k=0;k<TAM;k++){
        printf("%d ",vetor[k]);
    }
}
void bubble(int vetor_A[]){
    for(int i=0;i<TAM-1;i++){
        for(int j=i+1;j<TAM;j++){
            if(vetor_A[i] > vetor_A[j]){
                troca(vetor_A,i,j);
            }
        }
    }
    printf("\nVetor ORDENADO BUBBLE: ");
    imprimir(vetor_A);
}
void selection(int vetor_B[]){
    int position;
    for(int i=0;i<TAM-1;i++){
        position = i;
        for(int j=i+1;j<TAM;j++){
            if(vetor_B[position] > vetor_B[j]){
                position = j;
            }
        }
        troca(vetor_B,position,i);
    }
    printf("\nVetor ORDENADO SELECTION: ");
    imprimir(vetor_B);
}

void insertion(int vetor_C[]){
    int j,aux;
    for(int i=1;i<=TAM-1;i++){
        j = i-1;
        aux = vetor_C[i];
        while(j >= 0 && aux < vetor_C[j]){
            vetor_C[j+1] = vetor_C[j];
            j--;
        }
        vetor_C[j+1]=aux;
    }
    printf("\nVetor ORDENADO INSERTION: ");
    imprimir(vetor_C);
}
void aleatorio(int vetor[]){
    srand(time(NULL));
    for(int c=0;c<TAM;c++){
        vetor[c]=rand()%500;
    }
}
void TrataVetor(int vetor[]){
    aleatorio(vetor);
    printf("\nVetor_A DESORDENADO : ");
    imprimir(vetor);
}
int main(){
    int vetor_A[TAM] = {0};
    int vetor_B[TAM] = {0};
    int vetor_C[TAM] = {0};

    TrataVetor(vetor_A);
    bubble(vetor_A);
    printf("\n\n");
    TrataVetor(vetor_B);
    selection(vetor_B);
    printf("\n\n");
    TrataVetor(vetor_C);
    insertion(vetor_C);
    printf("\n\n");
    
    return 0;
}