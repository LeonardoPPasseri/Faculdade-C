#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_volume_caixa(float a,float b,float c){
    float res;
    res = a * b * c;
    return res;
}
float calcular_volume_cilindro(float h,float r, float pi){
    float res;
    res = pi * pow(r,2) * h;
    return res;
}
void main(){
    float ladoa,ladob,ladoc,pi,h,r,volumeCilindro,volumeCaixa,volumeTotalCaixa;
    printf("lado a:");
    scanf("%f",&ladoa);
    printf("lado b:");
    scanf("%f",&ladoa);
    printf("lado c:");
    scanf("%f",&ladoa);
    printf("valor de pi:");
    scanf("%f",&pi);
    printf("Altura:");
    scanf("%f",&h);
    printf("Raio:");
    scanf("%f",&r);
    volumeCilindro = calcular_volume_cilindro(h,r,pi);
    volumeTotalCaixa = calcular_volume_caixa(a,b,c);
    volumeCaixa = volumeTotalCaixa - volumeCilindro;
    printf("O volume do cilindro e:%f...O volume da caixa e:%f",volumeCilindro,volumeCaixa);

}