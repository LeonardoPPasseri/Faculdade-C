#include <stdio.h>

void contador(char tipo,int *nacional,int *importado){

    if(tipo == 'N'){
        (*nacional)++;
    }else{
        (*importado)++;
    }
}
int main(){
    char tipo;
    int codigo,qtdnacional,qtdimportado,estoque;
    float valor,preco;
    for(int c=0;c<4;c++){
        do{
            printf("\n\nN - Nacional\nI - Importado");
            printf("\nDigite o codigo do produto e o tipo:");
            scanf("%d %c",&codigo,&tipo);
        }while(tipo == 'N' && tipo == 'I');
        contador(tipo,&qtdnacional,&qtdimportado);
        printf("Digite o preco unitario e a qtd em estoque: ");
        scanf("%f%d",&preco,&estoque);
        valor = preco*estoque;
        printf("\nCodigo: %d\nTipo: %c\nValor em Estoque: %.2f",codigo,tipo,valor);
    }
    printf("\n\nNacional: %d\nImportado: %d",qtdnacional,qtdimportado);
    return 0;
}