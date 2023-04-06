#include <stdio.h>
float pagamento_dinheiro(float ValorProduto, float ValorDado, char forma)
{
    char res;
    float troco;

    if (forma == 'D' || forma == 'C'){
        res = "Não tem troco!";
        return res;
    }
    else{
        troco = ValorDado - ValorProduto;
        return troco;
    }
}

int main()
{
    char forma;
    float ValorDado, ValorProduto;

    printf("Digite a forma de pagamento: ");
        scanf("%c", &forma);
    // D = DEBITO ... C = CREDITO ... N = NOTA
    if (forma == 'N'){
        printf("Digite o valor do Produto e o valor dado pelo cliente: ");
        scanf("%f%f", &ValorProduto, &ValorDado);
    }
    else{
        if (forma == 'D' || forma == 'C'){
            printf("Digite o valor do Produto: ");
            scanf("%f", &ValorProduto);
        }
        else{
            printf("ERRO!Forma de pagamento nao existe!");
            return 0;
        }
    }

    if(forma == 'N'){
        printf("\nValor do Produto: R$%.2f \nValor Dado pelo cliente: R$%.2f \nForma de pagamento: %c \nTroco: %.2f",ValorProduto,ValorDado,forma,pagamento_dinheiro(ValorProduto,ValorDado,forma));
    }
    else{
        printf("\nValor do Produto: R$%.2f \nForma de pagamento: %c \n %s",ValorProduto,forma,pagamento_dinheiro(ValorProduto,ValorDado,forma));
    }

    return 0;
}

//Problema ao tentar exibir "Não tem troco!"