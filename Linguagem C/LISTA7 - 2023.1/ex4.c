int analisador(float vetor[],int qtd){
    int menores;
    for(int c=0;c<qtd;c++){
        if(vetor[qtd-1]>vetor[c]){
            menores++;
        }
    }
    return menores;
}