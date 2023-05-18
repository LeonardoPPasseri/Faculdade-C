int x(float vetor[],int qtd,float media){
    int acima = 0;
    for(int c = 0;c < qtd;c++){        
        if(vetor[c] > media){
            acima = acima + 1;
        }
    }
    return acima;
 }