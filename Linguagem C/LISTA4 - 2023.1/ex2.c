#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analisador(int tipos){
    int cont,codigo,valor,estoque,maiorquemil;

    cont = 0;
    maiorquemil = 0;

    while(cont < tipos){
        cont = cont + 1;
        printf("Digite o Codigo do modelo...ValorUnitario...Em estoque: ");
        scanf("%d%d%d",&codigo,&valor,&estoque);
        if(estoque > 1000){
            maiorquemil = maiorquemil + 1;
        }
    }
    return maiorquemil;
}

int main(){
    int tipos;
    printf("Quantos tipos de carros diferentes? ");
    scanf("%d",&tipos);

    printf("\nExistem %d de tipos diferentes que possuem estoque maior que 1000\n",analisador(tipos));

    return 0;
}
