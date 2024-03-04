#include<stdio.h>

float calculapesocubico(float c,float l,float a){
    float pesocubico;
    pesocubico = (c*l*a)/6000;
    return pesocubico;
}

float analisarpesos(float pesofisico,float pesocubico){

    if (pesocubico < 5){
        return pesofisico;
    }
    else{
        return pesocubico;
    }
}

float preco(float c,float l,float a,float pesofisico,float precobasico){
    float pesocubico,pesoescolhido;

    pesocubico = calculapesocubico(c,l,a);
    pesoescolhido = analisarpesos(pesofisico,pesocubico);
    return pesoescolhido * precobasico;
}


int main(){
    float precobasico,fisico,c,l,a,valorfinal;
    printf("Qual o preco basico do produto? ");
    scanf("%f",&precobasico);
    printf("Qual o peso fisico, comprimento,largura,altura do pacote? ");
    scanf("%f%f%f%f",&fisico,&c,&l,&a);

    valorfinal = preco(c,l,a,fisico,precobasico);
    printf("O valor a ser pago: R$%.2f",valorfinal);
    return 0;
}