#include <stdio.h>
#define NUM_NOTAS 11
int inicializa(int notas[],int tamanho){
    for(int i=0;i<tamanho;i++){
        notas[i]=0;
    }
}
int exibe(int notas[],int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("nota %d: %d aluno(s)",i,notas[i]);
    }
}
int main(){
    int notas[NUM_NOTAS];
    int nota;
    inicializa(notas,NUM_NOTAS);
    printf("Digite a nota dos alunos(0 a 10): ");
	while(1){
		scanf("%d", &nota);
		if(nota == -1){
			break;
		}
			else if(nota >= 0 && nota <=10){
				notas[nota]++;
			}
				else{
					printf("Nota inválida, digite novamente.\n");
				}
	}
	printf("Quantidade de alunos em cada nota:\n");
	exibe(notas, NUM_NOTAS);
	return 0;
}