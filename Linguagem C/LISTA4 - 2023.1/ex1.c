#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tabuada(int numero){
    int cont,res;
    cont = 0;

    while(cont < 10){
        cont = cont + 1;
        res = cont * numero;
        printf("\n%d x %d = %d",numero,cont,res);
    }
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    tabuada(numero);

    return 0;
}
