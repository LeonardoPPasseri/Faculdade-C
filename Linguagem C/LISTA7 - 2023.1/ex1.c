#include <stdio.h>

int produto(int vetor[],int qtd){
    int produto = 1;
    for(int c=0;c<qtd;c++){
        produto = vetor[c]*produto;
    }
    return produto;
}