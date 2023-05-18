void analizador(int tipo, int *qtdN, int *qtdI){
    if(tipo == 'N'){
        (*qtdN)++;
    }else{
        if(tipo == 'I'){
            (*qtdI)++;
        }
    }
}

int main(){
    int *qtdI = 0, *qtdN = 0;
    int tipo,cod,estoque;
    float ValorEstoque,ValorUnitario;
    for(int c = 0;c < 5;c++){
        printf("\nN - Nacional/I - Importado\n");
        printf("Digite o codigo, tipo, estoque, valorUnitario: ");
        scanf("%d %c%d%f",&cod,&tipo,&estoque,&ValorUnitario);

        printf("\nCodigo:%d \nTipo: %c",cod,tipo);
        ValorEstoque = estoque*ValorUnitario;
        printf("\nO valor em estoque foi: R$%.2f\n",ValorEstoque);
        
        analizador(tipo,&qtdN,&qtdI);
    }
    printf("\nProdutos Nacionais: %d\n",qtdN);
    printf("Produtos Importados: %d",qtdI);

    return 0;
}
