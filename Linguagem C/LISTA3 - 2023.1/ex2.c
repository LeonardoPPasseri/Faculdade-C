#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analisar_SitEleitoral(int idade){
    char nao,facult,eleitor;

    if(idade >= 18 && idade <= 70){
        eleitor = "Eleitor";
        return eleitor;
    }
    if(idade < 16){
        nao = "Nao Eleitor";
        return nao;
    }
    else{
        facult = "Eleitor Facultativo";
        return facult;
    }
}

void main(){
    int idade;
    int resultado;

    printf("Digite a idade:");
    scanf("%d",&idade);

    resultado = analisar_SitEleitoral(idade);

    printf("\nSituação Eleitoral: %s",resultado);
}
