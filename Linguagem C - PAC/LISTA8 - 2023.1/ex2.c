#include <stdio.h>
#define NUM_DEP 10

void inicializa(float vetor[],int tamanho){
    for(int c=0;c<tamanho;c++){
        vetor[c]=0;
    }
}
void exibe(float vetor[],int tamanho){
    for(int c=0;c<tamanho;c++){
        if(vetor[c] != 0){
            printf("\nO menor salario do departamento %d: %.2f",c+1,vetor[c]);
        }else{
            printf("\nO departamento %d nao possui funcionarios!",c+1);
        }
    }
}

int main(){
    float vetor[NUM_DEP],salario;
    int cod,tamanho=NUM_DEP;
    inicializa(vetor,tamanho);
    for(int c=0;c<3;c++){
        printf("Digite o codigo[1 a 10] e o salario do funcionario: ");
        scanf("%d%f",&cod,&salario);
        for(int c=0;c<tamanho;c++){
            if(cod == c+1){
                if(vetor[cod-1] > salario || vetor[cod-1] == 0){
                    vetor[cod-1] = salario;
                }
            }
        }
    }
    exibe(vetor,tamanho);
    return 0;
}
