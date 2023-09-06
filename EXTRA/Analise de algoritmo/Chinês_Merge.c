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
}


//25 10 6 15 4 11 

