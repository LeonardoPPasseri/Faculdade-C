
int le_calcular_soma(){

    int numero1, numero2, numero3, ressoma;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o primeiro numero:");
    scanf("%d", &numero2);

    printf("Digite o primeiro numero:");
    scanf("%d", &numero3);

    ressoma = numero1 + numero2 + numero3;

    return ressoma;
}
int calcular_media(int ressoma){
    int resmedia;
    resmedia = ressoma/3;
    printf("a media e: %d",resmedia);
    return resmedia;
}

void programa(){

    printf("a soma e: %d e a media e: %d", soma, media);

}
