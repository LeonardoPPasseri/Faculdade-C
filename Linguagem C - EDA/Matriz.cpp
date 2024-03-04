#include <stdio.h>
#define N 5 

int ehGrafoCompleto(int matriz[N][N]){
    int valor;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            valor = matriz[i][j];
            if(i != j && valor != 1){
                return 0;
            }
            if(i == j && valor != 0){
                return 0;
            }
            if(valor != 0 && valor != 1){
                return 0;
            }
        }
    }
    return 1;
}


int main() {
    int matriz[N][N] = {
        {0, 1, 2, 1, 1},
        {1, 0, 1, 1, 1},
        {1, 1, 0, 1, 1},
        {1, 1, 1, 0, 1},
        {1, 1, 1, 1, 0}
    };
    
    int resultado = ehGrafoCompleto(matriz);
    
    if (resultado == 1) {
        printf("Grafo completo.\n");
    } else {
        printf("Grafo incompleto.\n");
    }

    return 0;
}