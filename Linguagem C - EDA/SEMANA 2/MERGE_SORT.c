#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Merge_Sort(int vetor[],int aux[],int TAM,int ini,int fim){
    int i,j,k;
    if(ini < fim){
        int meio = (ini+fim)/2;
        Merge_Sort(vetor,aux,TAM,ini,meio);
        Merge_Sort(vetor,aux,TAM,meio+1,fim);

        i = ini;
        j = meio+1;
        k = ini;
        //MERGE
        while(i <= meio && j <= fim){
            if(vetor[i] < vetor[j]){
                aux[k] = vetor[i];
                i++;
                k++;
            }
            else{
                aux[k] = vetor[j];
                j++;
                k++;
            }
        }
        while(i <= meio){
            aux[k] = vetor[i];
            i++;
            k++;
        }
        while(j <= fim){
            aux[k]=vetor[j];
            j++;
            k++;
        }
        //Copiando o vetor aux para o vetor original
        for(int c=ini;c<=fim;c++){
            vetor[c] = aux[c];
        }
    }
    printf("\ninicio:%d, fim:%d  :",ini,fim);
    for(int c=0;c<TAM;c++){
        printf("%d ",vetor[c]);
    }
    printf("\n");
    for(int c=0;c<TAM;c++){
        printf("%d ",aux[c]);
    }
}


void imprimir(int vetor[],int TAM){
    printf("\nVetor Ordenado: \n");
    for(int c=0;c<TAM;c++){
        printf("%d ",vetor[c]);
    }
}
void aleatorio(int vetor[], int TAM){
    srand(time(NULL));
    printf("\nValores do vetor: \n");
    for(int c=0;c<TAM;c++){
        vetor[c] = ((rand() - (RAND_MAX/2))%500);
        printf("%d ",vetor[c]);
    }
    printf("\n\n");
}

int main(){
    int vetor[8];
    int TAM = sizeof(vetor)/sizeof(vetor[0]);
    int aux[8] = {0};
    aleatorio(vetor,TAM);
    int ini = 0;
    int fim = TAM-1;
    Merge_Sort(vetor,aux,TAM,ini,fim);
    imprimir(vetor,TAM);
    return 0;
}