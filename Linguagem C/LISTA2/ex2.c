
int calcular_soma(int num1, int num2, int num3){
    int ressoma;
    ressoma = num1 + num2 + num3;
    printf("a soma é: %d", ressoma);
    return ressoma;
}

int calcular_media(int ressoma){
    int resmedia;
    resmedia = ressoma / 3;
    printf("a media é: %d",resmedia);
    return resmedia;
}

void programa(){

    int soma, media, numero1, numero2, numero3;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o primeiro numero:");
    scanf("%d", &numero2);

    printf("Digite o primeiro numero:");
    scanf("%d", &numero3);

    soma = calcular_soma(numero1, numero2, numero3);
    media = calcular_media(numero1, numero2, numero3);

    printf("a soma é: %d e a media é: %d", soma, media);

}

