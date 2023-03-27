#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analisar_SitEleitoral(int idade){
    char nao[20],facult[20],eleitor[20];
    if(idade >= 18 && idade <= 70){
        nao = "Nao Eleitor";
        return nao;
    }
    else{
        if(idade >= 16 && idade < 18){
            eleitor = "Eleitor";
            return eleitor;
        }
        else{
            facult = "Eleitor Facultativo";
            return facult;
        }
    }
}

void main(){
    int idade;
    char resultado[5];
    printf("Digite a idade:");
    scanf("%d",idade);

    resultado = analisar_SitEleitoral(idade);

    printf("Essa pessoa e: %s",resultado);
}

