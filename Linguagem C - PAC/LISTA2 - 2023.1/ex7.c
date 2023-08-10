#include <stdio.h>

int caixa(int a,int b, int c){
    int volume;

    volume = a*b*c;

    return volume;
}
int cilindro(float pi,int r,int h){
    float volume;

    volume = pi * r * r * h;

    return volume;
}

int main(){
    int ladoa,ladob,ladoc;
    int volumecaixa;
    float volumecilindro,volumeREALcaixa;
    int r,h;
    float pi;

    printf("digite os 3 lados:");
    scanf("%d%d%d",&ladoa,&ladob,&ladoc);

    printf("digite o valor de PI, RAIO, ALTURA:");
    scanf("%f%d%d",&pi,&r,&h);

    volumecaixa = caixa(ladoa,ladob,ladoc);
    volumecilindro = cilindro(pi,r,h);

    volumeREALcaixa = volumecaixa - volumecilindro;

    printf("\nVolume da caixa: %d m3",volumecaixa);
    printf("\nVolume do cilindro: %.2f m3",volumecilindro);
    printf("\nVolum REAL da caixa: %2.f m3",volumeREALcaixa);

    return 0;
}