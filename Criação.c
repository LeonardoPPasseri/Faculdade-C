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
// 5 4 3 2 
// ini = (0)
// fim = (3)
// meio = (1)
// meio + 1 = (2)
//1mergesort[1](0 1)
//ini=0
//fim=1
//ini+fim/2 ==> 0
//meio=0
//2mergesort[1] (0 0)
//IF da negativo e a recursividade desmonta a pilha voltando para o merge_sort[2]
//meio+1=2
//fim=3
//mergesort[2](2 3)
//ini=2
//fim=3
//ini+fim/2 ==> 2
//mergesort[1] (2 2)
//if da negativo e a recursividade desmonta a pilha voltando para o merge_sort[2]
//if da negativo e a recursividade desmonta a pilha começando a usar o WHILE
//ini=

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