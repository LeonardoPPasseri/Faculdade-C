#include <stdio.h>

void umDepartamento(int qtdfunc,float *maior,int *qtdmaior){
    int matricula;
    float salario;
    *maior = 0;
    *qtdmaior = 0;
    for(int c=0;c<qtdfunc;c++){
        printf("Qual é a matricula e o salario? ");
        scanf("%d%f",&matricula,&salario);
        if(salario>*maior){
            *maior = salario;
            (*qtdmaior)=0;
            (*qtdmaior)++;
        }else{
            if(*maior == salario){
                (*qtdmaior)++;
            }
        }
    }
}
int main(){
    int qtdfunc,qtdmaior,codigo;
    float maior;
    printf("Digite o codigo do departamento: ");
    scanf("%d",&codigo);
    do{
        printf("Quantos funcionarios esse departamento possui? ");
        scanf("%d",&qtdfunc);
        umDepartamento(qtdfunc,&maior,&qtdmaior);
        printf("\n\nMaior Salario:%.2f\nQuantidade de funcionarios com esse salario: %d\n\n",maior,qtdmaior);
        printf("Digite o codigo do departamento[0 - Sair]: ");
        scanf("%d",&codigo);
    }while(codigo != 0);
    return 0;
}