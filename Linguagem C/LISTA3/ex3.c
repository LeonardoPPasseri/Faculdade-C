#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_AreaCorporal(float p, int h){
    float A;
    A = sqrt(p*h)/60;
    return A;
}

float calcular_dif(float A1,float A2){
    int res;
    if(A1 == A2){
        res = "Manteve a area inalterada";
        return res;
    }
    if(A2 > A1){
        res = "Aumentou a area corporal";
        return res;
        }
    else{
        res = "Diminuiu a area corporal";
        return res;
    }
}

void main(){
    float p1,p2,A1,A2;
    int h,res;


    printf("Primeiro peso:");
    scanf("%f",&p1);
     printf("Primeira altura:");
    scanf("%d",&h);
     printf("Segundo peso:");
    scanf("%f",&p2);

    A1 = calcular_AreaCorporal(p1,h);
    A2 = calcular_AreaCorporal(p2,h);

    res = calcular_dif(A1,A2);

    printf("%s",res);
}
