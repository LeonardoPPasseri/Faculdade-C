//PseudoAleatoriedade com o uso da função rand().

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheArray(int arr[], int len) {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios com o valor atual do tempo

    for (int i = 0; i < len; i++) {
        arr[i] = (rand() - (RAND_MAX / 2)) % 500; // Gera um número aleatório entre -500 e 499
    } 
    //rand() gera numeros positivos.
    //RAND_MAX -> É o numero max que pode ir o rand() [32767]
    //arr[i] = rand() geraria numeros entre 0 e 32767
    //arr[i] = (rand() - (RAND_MAX) ao diminuir pelo RAND_MAX o valor varia em -32767 e 0
    //arr[i] = (rand() - (RAND_MAX / 2) ao dividir o RAND_MAX por 2 o valor varia entre -16433 e 16433
    //O uso da % serve para controlar a variação dos valores
}

int main() {
    int myArr[20];
    int len = sizeof(myArr) / sizeof(myArr[0]); //Usado para diminuir as chances de usar elementos fora dos limites do array

    preencheArray(myArr, len);

    printf("Array preenchido com valores aleatórios:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", myArr[i]);
    }
    printf("\n");

    return 0;
}
