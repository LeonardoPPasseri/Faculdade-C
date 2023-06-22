#include <stdio.h>

struct depto{
int qtd;
float soma;
};
typedef struct depto Tdepto;

float analisador(Tdepto vetor[]){
    float media;
    for(int c=0;c<30;c++){
        media = vetor[c].soma/vetor[c].qtd;
        printf("\n\nO Codigo do departamento: %d\nMedia salarial: %.2f\n\n",c+1,media);
    }
}