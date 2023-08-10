#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analisar_matricula(int ano, int semestre, int seq){
    int resultado;

    if(ano >= 10 && ano <= 22){
        if(semestre >= 1 && semestre <= 2){
            if(seq >=1 && seq <= 90){
                resultado = 1;
                return resultado;
            }
            else{
                resultado = 0;
                return resultado;
            }
        }
        else{
            resultado = 0;
            return resultado;
        }
    }
    else{
        resultado = 0;
        return resultado;
    }
}




int main(){
    int ano,semestre,seq,resultado;
    printf("Digite a matricula dessa forma 12 3 45: ");
    scanf("%d%d%d",&ano,&semestre,&seq);

    resultado = analisar_matricula(ano,semestre,seq);

    if(resultado > 0){
        printf("%d",resultado);
        printf("\nMatricula valida! Parabens!!");
    }else{
        printf("\nMatricula invalida...");
    }
    return 0;
}
