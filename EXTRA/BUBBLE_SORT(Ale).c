#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void ordenador(int vetor[],int TAM){
    int aux;
    for(int i=0;i<TAM;i++){
        for(int j=i+1;j<TAM;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Valor do vetor ORDENADO: \n");
    for(int c=0;c<TAM;c++){
        printf("%d ",vetor[c]);
    }
}

void aleatorio(int vetor[], int TAM){
    srand(time(NULL));
    printf("Valores do vetor: \n");
    for(int c=0;c<TAM;c++){
        vetor[c] = ((rand() - (RAND_MAX/2))%500);
        printf("%d ",vetor[c]);
    }
    printf("\n\n");
}

int main(){
    int vetor[20];
    int TAM = sizeof(vetor)/sizeof(vetor[0]);
    aleatorio(vetor,TAM);
    ordenador(vetor,TAM);
    return 0;
}