#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_soma(){
    int ressoma,numero1,numero2,numero3;

    printf("Digite 3 numeros inteiros:");
    scanf("%d%d%d", &numero1,&numero2,&numero3);

    ressoma = numero1 + numero2 + numero3;
    printf("\nSoma:%d",ressoma);

    return ressoma;
}
void calcular_media(int totsoma){
    float resmedia;

    resmedia = totsoma/3.0;
    printf("\nMedia: %.2f \n",resmedia);
}

int main(){
    int totsoma;

    totsoma = calcular_soma();
    calcular_media(totsoma);

    return 0;
}
