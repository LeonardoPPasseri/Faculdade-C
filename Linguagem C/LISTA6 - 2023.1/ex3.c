#include <stdio.h>

void umDepartamento(int qtd,float *maior,int *qtdmaior){
    int matricula;
    *maior = 0;
    float salario;

    for(int c = 0;c < qtd;c++){
        printf("Matricula e Salario: ");
        scanf("%d%f",&matricula,&salario);
        if(salario > *maior){
            *maior = salario;
            *qtdmaior = 1;
        }else{
            if(salario == *maior){
                (*qtdmaior)++;
            }
        }
    }
}

int main(){
    int qtd,cod,qtdmaior;
    float maior;
    printf("Digite o codigo(0 - Finaliza): ");
    scanf("%d",&cod);
    while(cod != 0){
        printf("Digite a quantidade de funcionarios do departamento: ");
        scanf("%d",&qtd);
        umDepartamento(qtd,&maior,&qtdmaior);
        printf("O maior salario: R$ %.2f \nA quantidade de funcionarios com esse salario foi: %d\n\n",maior,qtdmaior);
        printf("Digite o codigo(0 - Finaliza): ");
        scanf("%d",&cod);
    }

    return 0;
}