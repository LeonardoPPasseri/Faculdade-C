#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Particionamento(int vetor[], int ini, int fim) {
    int pivo = vetor[fim];
    int i = ini - 1;
    int aux;

    for (int j = ini; j <= fim - 1; j++) {
        if (vetor[j] < pivo) {
            i++;
            aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
        }
    }
    aux = vetor[i + 1];
    vetor[i + 1] = pivo;
    vetor[fim] = aux;

    return i + 1;
}
void Quick_Sort(int vetor[], int TAM, int ini, int fim) {
    if (ini < fim) {
        int index_pivo = Particionamento(vetor, ini, fim);
        Quick_Sort(vetor, TAM, ini, index_pivo - 1);
        Quick_Sort(vetor, TAM, index_pivo + 1, fim);
    }
}
void imprimir(int vetor[], int TAM) {
    for (int c = 0; c < TAM; c++) {
        printf("%d ", vetor[c]);
    }
}
void aleatorio(int vetor[], int TAM) {
    srand(time(NULL));
    for (int c = 0; c < TAM; c++) {
        vetor[c] = ((rand()) % 100);
    }
    printf("Vetor DESORDENADO: ");
    imprimir(vetor, TAM);
}
int main() {
    int vetor[10];
    int TAM = sizeof(vetor) / sizeof(vetor[0]);
    int ini = 0, fim = TAM - 1;
    aleatorio(vetor, TAM);
    Quick_Sort(vetor, TAM, ini, fim);
    printf("\nVetor ORDENADO: ");
    imprimir(vetor, TAM);
    return 0;
}
