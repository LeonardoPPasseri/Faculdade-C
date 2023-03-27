#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcular_idh(float E,float R, float L){
    float res;
    res = (E+R+L)/3;
    return res;
}

void main(){
    float E,L,R,IDH;

    printf(Educação:);
    scanf("%f",&E);
    printf(Longevidade:);
    scanf("%f",&L);
    printf(Riqueza:);
    scanf("%f",&R);

    if(E >= (L + R)){
        IDH = (E*L*R) / calcular_idh(E,R,L);
        printf("O IDH e: %f(2)",IDH);
    }
    else{
        IDH = calcular_idh(E,R,L);
        printf("O IDG e: %f(2)",IDH);
    }
}