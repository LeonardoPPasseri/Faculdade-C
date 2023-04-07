#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char menu(){
    char tipo[60];
    char opcao[60];

    fflush(stdin);
    printf("\n========= MENU =========");
    printf("\nAlternativas:\n");
    printf("horista");
    printf("   contratado");
    printf("   servicos");
    printf("\n=========================");
    printf("\nDigite uma das alternativas:\n ");
    scanf("%s",&tipo[0]);


    return tipo;
}

float horista(){
    float salario;
    int horas,valor;
    printf("Digite o Valor hora e a quantidade de horas: ");
    scanf("%d%d",&valor,&horas);
    salario = valor * horas;

    return salario;
}

float contratado(){
    float salario;
    printf("Digite seu salario: ");
    scanf("%f",&salario);

    return salario;
}

float servicos(){
    float valor,salario;
    int quantidade;
    printf("Digite a quantidade de servicos prestados e o valor de cada um: ");
    scanf("%d%f",quantidade,valor);
    salario = quantidade * valor;

    return salario;
}


int main(){
    char tipo[60];
    int c;

    c = 0;

    while(c < 2){
        c = c + 1;

        tipo = main();

        if(tipo == "horista"){
           printf("\nSalario:%.2f",horista());
        }
        else{
            if(tipo == "contratado"){
               printf("\nSalario:%.2f",contratado());
            }
            else{
                if(tipo == "servicos"){
                   printf("\nSalario:%.2f",servicos());
                }
                else{
                    printf("\nERRO!Tipo nao identificado\n");
                    return 0;
                }
            }
        }
    }


    return 0;
}

// Erro ao tentar "tipo = main();" em que retorna (null)