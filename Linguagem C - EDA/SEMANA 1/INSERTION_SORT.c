#include <stdio.h>
#define MAX 4

//ALGORITMO DE ORDENAÇÃO INSERTION SORT(Crescente)

void Ordenador(int vetor[]){
    int aux=0,j;
    for(int i=1;i<=MAX-1;i++){
           j = i-1;
           aux = vetor[i];
        while(j>=0 && aux < vetor[j]){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
    //5 4 2
    //5 5 2
    //4 5 2
    //4 5 5
    //4 4 5
    //2 4 5
    printf("O vetor ficou assim: ");
    for(int c=0;c<MAX;c++){
        printf("\n%d",vetor[c]);
    }
}

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
/*
-> vetor com 4 lugares.
-> Tal que vetor(5,3,1,4)

>INICIO
vetor(i) [i=1/vetor[i]=3]
vetor(j) [j=0/vetor[j]=5]
->variavel auxiliar recebe o valor do vetor(i) para que não
    seja perdida. aux=3

>while(j>=0 && aux<vetor[j])
O vetor(j+1)[Que é igual ao vetor(i)] recebe o valor vetor(j)
> 5,5,1,4

->Apos isso o j recebe um decréscimo de 1[Para que seja testa o vetor(j) anterior]
>j = 0 -> j=-1

Teste do while que, no caso, dá negativo então passa para o FOR

vetor[j+1] --> vetor[0] = 5
>vetor[j+1] = aux
Recebe o valor do auxiliar[com isso, a troca foi completa entre o valor
5 e 3]

*/

