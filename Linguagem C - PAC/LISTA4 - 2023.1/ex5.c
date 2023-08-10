#include <stdio.h>

float quantfuncionarios(int funcionarios){
    int matricula,c;
    float salario,totalsalario;

    totalsalario = 0;
    c = 0;

    while(c < funcionarios){
        c = c + 1;

        printf("\nDigite a matricula e o salario: ");
        scanf("%d%f",&matricula,&salario);

        totalsalario = totalsalario + salario;

        printf("\nMatricula %d: %d",c,matricula);
    }

    printf("\nSoma dos salarios do departamento: R$%.2f",totalsalario);

    return totalsalario;
}


int main(){
    int c,funcionarios,codigo;
    float totalsalario;
    c = 0;
    totalsalario = 0;

    while(c < 30){
        c = c + 1;

        printf("\nDigite o codigo do departamento e quantos funcionarios ele possui: ");
        scanf("%d%d",&codigo,&funcionarios);



        totalsalario = totalsalario + quantfuncionarios(funcionarios);
    }
    printf("\nO total de salarios de todos os departamentos: R$%.2f",totalsalario);

    return 0;
}