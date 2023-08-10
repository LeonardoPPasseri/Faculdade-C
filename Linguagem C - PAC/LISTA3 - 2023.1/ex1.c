#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcular_idh(float E,float R, float L){
    float res,IDH;
    res = (E+R+L)/3;

    if(E >= (L + R)){
        IDH = (E*L*R) / ((E+R+L)/3);
        printf("\nIDH: %.2f\n",IDH);
    }
    else{
        IDH = E*R*L;
        printf("\nIDH: %.2f\n",IDH);
    }
    return res;
}

int main(){
    float E,L,R,IDH;

    printf("Educacao:");
    scanf("%f",&E);
    printf("Longevidade:");
    scanf("%f",&L);
    printf("Riqueza:");
    scanf("%f",&R);

    calcular_idh(E,R,L);

    return 0;
}
