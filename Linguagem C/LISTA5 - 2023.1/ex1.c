#include<stdio.h>


float calcular(float valor,float mbyte){
    float total;
    total = valor * mbyte;

    printf("O valor gasto pelo usuario foi: R$%.2f",total);

    return total;

}

int main(){
    float valor,mbyte,res,total,maior,media;
    char teste;
    int c;

    printf("Qual o valor por Mbytes? ");
    scanf("%f",&valor);

    maior = 0;
    total = 0;
    c = 0;

    do{
        fflush(stdin);
        printf("\nDeseja colocar um novo usuario(S/N)? ");
        scanf("%c",&teste);

        if (teste == 'S'){
            printf("\nQuantidade de download do usuario: ");
            scanf("%f",&mbyte);

            c = c + 1;
            res = calcular(valor,mbyte);

            total = total + res;

            if(res > maior){
                maior = res;
            }

        }

    }
    while(teste == 'S');

    media = total/c;

    printf("\nValor medio: R$%.2f \nMaior valor gasto: R$%.2f \n",media,maior);


    return 0;
}