#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_soma(int num1, int num2, int num3){
    int ressoma;
    ressoma = num1 + num2 + num3;
    printf("\nSoma:%d",ressoma);

    return ressoma;
}
void calcular_media(int num1, int num2, int num3){
    float resmedia;
    resmedia = calcular_soma(num1,num2,num3)/3.0;
    printf("\nMedia: %.2f \n",resmedia);

}

int main(){

    int totsoma, numero1, numero2, numero3;

    printf("Digite 3 numeros inteiros:");
    scanf("%d%d%d", &numero1,&numero2,&numero3);

    calcular_media(numero1,numero2,numero3);

    return 0;
}