#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_media(float num1,float num2){
    float res;
    res = (num1+num2)/2.0;
    return res;
}

int main(){
    int matricula;
    float nota1,nota2,trab1,trab2,mediaProva,mediaTrab,mediaFinal;

    printf("Digite a matricula:");
    scanf("%d",&matricula);
    printf("Digite a primeira nota da prova:");
    scanf("%f",&nota1);
    printf("Digite a segunda nota da prova:");
    scanf("%f",&nota2);
    printf("Digite a primeira nota do trabalho:");
    scanf("%f",&trab1);
    printf("Digite a segunda nota do trabalho:");
    scanf("%f",&trab2);

    mediaProva = calcular_media(nota1,nota2);
    mediaTrab = calcular_media(trab1,trab2);
    mediaFinal = calcular_media(mediaProva,mediaTrab);

    printf("\nMatricula:%d \nMediaDaProva:%.2f \nMediaDoTrabalho:%.2f \nMediaFinal:%.2f \n",matricula,mediaProva,mediaTrab,mediaFinal);

    return 0;
}
