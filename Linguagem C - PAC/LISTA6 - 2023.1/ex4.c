#include <stdio.h>

int leValidaClassificacao(){
    int tipo;
    do{
    printf("Qual a classificacao da peca[1,2,3,4]: ");
    scanf("%d",&tipo);
    }while(tipo<1 || tipo>4);
    return tipo;
}
void  classe(int tipo, int *qtdmax, int *qtdmin){
    int max,min;
    printf("Digite a quantidade maxima e quantidade min da peca: ");
    scanf("%d%d",&max,&min);
    *qtdmax = max;
    *qtdmin = min;
}

int main(){
    int cod,classi,qtdmax,qtdmin;
    for(int c=0;c<1;c++){
        printf("Digite o codigo da peca: ");
        scanf("%d",&cod);
        classi = leValidaClassificacao();
        classe(classi,&qtdmax,&qtdmin);
        printf("\n\nCodigo: %d\nClassificacao: %d\nQtdMAX: %d\nQtdMIN: %d",cod,classi,qtdmax,qtdmin);
    }
    return 0;
}