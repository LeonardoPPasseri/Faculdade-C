#include <stdio.h>

int analisador(float vetor[],int qtd, float media){
    int maiores = 0;
    for(int c=0;c<qtd;c++){
        if(vetor[c] > media){
            maiores++;
        }
    }
    return maiores;
}
