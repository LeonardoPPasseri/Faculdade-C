#include <stdio.h>
int procurador(float vetor[],float numero,int qtd){
    int encontro = -1;
    for(int c=0;c<qtd;c++){
        if(numero == vetor[c]){
            encontro = c;
        }
    }
    return encontro;
}