#include <stdio.h>
#define MAX 4
void Ordenador(int vetor[]){
    int aux,j;
    for(int i=1;i<MAX;i++){
        if(vetor[i]<0){
            aux = vetor[i];
            j = i-1;
            while(j >= 0 && aux > vetor[j]){
                vetor[j+1]=vetor[j];
                j--;
            }
            vetor[j+1]=aux;
        }else{
            aux = vetor[i];
            j = i-1;
            while(j >= 0 && aux < vetor[j]){
                vetor[j+1]=vetor[j];
                j--;
            }
            vetor[j+1]=aux;
        }
    }
}
//2 4 -2 0
//2 4 -2 0
//

void inicializador(int vetor[]){
    for(int c=0;c<MAX;c++){
        vetor[c]=0;
    }
}

int main(){
    int vetor[MAX];
    inicializador(vetor);
    printf("Digite os numeros: ");
    for(int c=0;c<MAX;c++){
        scanf("%d",&vetor[c]);
    }
    Ordenador(vetor);
    return 0;
}