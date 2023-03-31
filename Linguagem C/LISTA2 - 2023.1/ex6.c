#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_reta(int x1,int y1,int x2,int y2){
    float d;
    d = (float)sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    return d;
}

void main(){
    int pontoX1,pontoY1,pontoX2,pontoY2,pontoX3,pontoY3,reta1_2,reta1_3,reta2_3;
    float perimetro;

    printf("x1:");
    scanf("%d",&pontoX1);
    printf("y1:");
    scanf("%d",&pontoY1);
    printf("x2:");
    scanf("%d",&pontoX2);
    printf("y2:");
    scanf("%d",&pontoY2);
    printf("x3:");
    scanf("%d",&pontoX3);
    printf("y3:");
    scanf("%d",&pontoY3);

    reta1_2 = calcular_reta(pontoX1,pontoY1,pontoX2,pontoY2);
    reta1_3 = calcular_reta(pontoX1,pontoY1,pontoX3,pontoY3);
    reta2_3 = calcular_reta(pontoX2,pontoY2,pontoX3,pontoY3);

    perimetro = reta1_2 + reta1_3 + reta2_3;

    printf("\nPerimetro: %.2f\n",perimetro);

}
