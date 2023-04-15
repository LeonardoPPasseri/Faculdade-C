#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pagamento_dinheiro(float ValorProduto, float ValorDado, char forma)
{
    int res;
    float troco;

    if (forma == 'D' || forma == 'C'){
        res = "Nao ha troco";
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
    int res;

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
    res = pagamento_dinheiro(ValorProduto,ValorDado,forma);
    if(forma == 'N'){
        printf("\nValor do Produto: R$%.2f \nValor Dado pelo cliente: R$%.2f \nForma de pagamento: %c \nTroco: %.2f",ValorProduto,ValorDado,forma,pagamento_dinheiro(ValorProduto,ValorDado,forma));
    }
    else{
        printf("\nValor do Produto: R$%.2f \nForma de pagamento: %c \n %s",ValorProduto,forma,res);
    }

    return 0;
}
