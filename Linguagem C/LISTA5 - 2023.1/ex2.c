#include<stdio.h>

float menu(){
    int escolha;

    printf("Escolha uma das opcoes a baixo: \n 1 - Quadrado\n 2 - Retangulo\n 3 - Triangulo\n 4 - Trapezio\n 5 - FIM \n\n");
    scanf("%d",&escolha);

    return escolha;
}


float quadrado(){
    float lado,res;
    printf("\nDigite o Lado:");
    scanf("%f",&lado);

    res = lado * lado;
    return res;
}

float retangulo(){
    float base,altura,res;
    printf("Digite o Base e altura: ");
    scanf("%f%f",&base,&altura);

    res = base * altura;
    return res;
}

float triangulo(){
    float base,altura,res;
    printf("Digite o base e altura: ");
    scanf("%f%f",&base,&altura);

    res = base * altura / 2;
    return res;
}

float trapezio(){
    float maior,menor,altura,res;
    printf("Digite o base Maior, base Menor e altura: ");
    scanf("%f%f%f",&maior,&menor,&altura);

    res = (maior+menor)*altura / 2;
    return res;
}


int main(){
    int opcao;
    float res;

    do{
        opcao = menu();

        if(opcao == 1){
            res = quadrado();
            printf("\n\nArea do quadrado: %.2f\n\n",res);
        }
        else{
            if(opcao == 2){
                res = retangulo();
                printf("\n\nArea do retangulo: %.2f\n\n",res);
            }
            else{
                if(opcao == 3){
                    res = triangulo();
                    printf("\n\nArea do triangulo: %.2f\n\n",res);
                }
                else{
                    if(opcao == 4){
                        res = trapezio();
                        printf("\n\nArea do trapezio: %.2f\n\n",res);
                    }
                }
            }
        }
    }
    while(opcao != 5);

    return 0;
}