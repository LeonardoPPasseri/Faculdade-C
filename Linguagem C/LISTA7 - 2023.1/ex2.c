int analisador(int vetor[],int qtd,int *qtdimpar, int *qtdpar){
    
    for(int c=0;c<qtd;c++){
        if(vetor[c] % 2 == 1){
            (*qtdimpar)++;
        }else{
            (*qtdpar)++;
        }      
    }
}