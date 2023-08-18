/* 
Uma empresa cadastrou a matrícula e o salário dos 15 funcionários para
verificar algumas informações e listar:
a. os salários em ordem decrescente.
b. o somatório dos salários.
c. a quantidade e a(s) matricula(s) do(s) funcionário(s) que recebe(m)
salário menor do que a média geral. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3
void imprimir(int matricula[],float salario[]){
    printf("\n======================================\n");
    for(int c=0;c<TAM;c++){
        printf("Matricula: %d  => Salario: %.1f\n",matricula[c],salario[c]);
    }
    printf("======================================\n");
}
void ordenador(int matricula[],float salario[]){
    float aux;
    for(int i=0;i<TAM-1;i++){
        for(int j=1;j<TAM;j++){
            if(salario[i] < salario[j]){
                
                aux = salario[i];
                salario[i] = salario[j];
                salario[j] = aux;

                aux = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = aux;
            }
        }
    }
    printf("\nORDENADO: ");
    imprimir(matricula,salario);
}
float soma(float salario[]){
    float total=0.0;
    for(int c=0;c<TAM;c++){
       total = total + salario[c];
    }
    return total;
}

void menorsalario(float total,float salario[],int matricula[]){
    float media = total/TAM;
    int qtdmenor=0;
    printf("\nAs matriculas que possuem salario menor que a media: ");
    for(int c=0;c<TAM;c++){
        if(media > salario[c]){
            qtdmenor++;
            printf("%d ",matricula[c]);
        }
    }
    printf("\n%d funcionario(s) recebe(m) salario menor que a media",qtdmenor);
}
int main(){
    float salario[TAM] = {0.0};
    int matricula[TAM] = {0};
    printf("Digite o salario e a matricula: \n");
    for(int i=0;i<TAM;i++){
        scanf("%f%d",&salario[i],&matricula[i]);
        while(salario[i] < 0 || matricula[i] <= 0){
            printf("ERRO!Salario < 0 ou matricula <= 0 foi digitado{DIGITE NOVAMENTE}\n");
            scanf("%f%d",&salario[i],&matricula[i]);
        }
    }
    printf("\nDESORDENADO: ");
    imprimir(matricula,salario);
    printf("\n\n");
    ordenador(matricula,salario);

    float total = soma(salario);
    printf("\nSomatorio dos Salarios: %.1f",total);

    menorsalario(total,salario,matricula);
    
    return 0;
}