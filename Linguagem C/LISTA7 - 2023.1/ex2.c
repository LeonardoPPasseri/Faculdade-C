void analizador(int vetor[],int qtd,int *pares,int *impares){

    for(int c = 0;c < qtd;c++){
        if(vetor[c] % 2 == 0){
            (*pares)++;
        }else{
            (*impares)++;
        }
    }
}
