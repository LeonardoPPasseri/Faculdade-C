#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analisador(){
    int c;
    float maiorvalor,totalvalor,codigo,valor;

    c = 0;
    maiorvalor = 0;
    totalvalor = 0;

    while(c < 20){
        c = c + 1;
        printf("Digite o Codigo do posto...Valor arrecadado...: ");
        scanf("%d%f",&codigo,&valor);

        totalvalor = totalvalor + valor;

        if (valor > maiorvalor){
            maiorvalor = valor;
        }
    }

    printf("\nA maior arrecadacao entre os postos: R$%.2f \nO valor total foi: R$%.2f",maiorvalor,totalvalor);

}

int main(){

    analisador();

    return 0;
}

//Pode não estar como pedido na questão