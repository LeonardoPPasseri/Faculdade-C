#include<stdio.h>

float perifericos(int quantidade){
    int c;
    float total,valor;

    c = 0;
    while(c < quantidade){
        c = c + 1;

        printf("\nValor do periferico %d: ",c);
        scanf("%f",&valor);
        total = total + valor;
    }

    return total;
}

int main(){

    int codigo,quantidade,semperiferico,c;
    float valorbase,valorperifericos,total,totalgeral,media;

    codigo = 0;
    semperiferico = 0;
    c = 0;

    do{

        printf("Digite o codigo: ");
        scanf("%d",&codigo);



        if(codigo != 0){

            printf("\n\nDigite o valor e quantos perifericos: ");
            scanf("%f%d",&valorbase,&quantidade);

            valorperifericos = perifericos(quantidade);

            total = valorbase + valorperifericos;

            c = c + 1;

            totalgeral = totalgeral + total;

            media = totalgeral / c;

            printf("\n\nO valor da venda foi: R$%.2f\n\n",total);


            if(quantidade == 0){
                semperiferico = semperiferico + 1;

            }

        }


    }
    while(codigo != 0);

    printf("\n\nVendas sem perifericos: %d\nValor medio das vendas: R$%.2f\n\n",semperiferico,media);

    return 0;
}

