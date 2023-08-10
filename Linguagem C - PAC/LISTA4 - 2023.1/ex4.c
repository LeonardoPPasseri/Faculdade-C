#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char menu(){
    char tipo;

    fflush(stdin);
    printf("\n========= MENU =========");
    printf("\nAlternativas:\n");
    printf("H para Horista...");
    printf("C para Contratado...");
    printf("S para Servicos");
    printf("\n=========================");

    printf("\nDigite a letra de uma das alternativas:\n ");
    scanf("%c",&tipo);


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
    char tipo;
    int c;

    c = 0;

    while(c < 2){
        c = c + 1;
        tipo = menu();

        if(tipo == 'H'){
           printf("\nSalario:%.2f\n",horista());
        }
        else{
            if(tipo == 'C'){
               printf("\nSalario:%.2f\n",contratado());
            }
            else{
                if(tipo == 'S'){
                    printf("\nSalario:%.2f\n",servicos());
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

// A parte de servicos() não retorna;