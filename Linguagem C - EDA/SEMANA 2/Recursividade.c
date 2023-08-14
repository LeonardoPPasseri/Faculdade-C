#include <stdio.h>
void imprimir(int n){  //Decrescente
    if(n == 0){ // <---PONTO DE PARADA
        printf("\nN=%d",n); 
    }else{
        printf("\nN=%d",n);  
        imprimir(n-1); //Recursividade
    }
}
//Empilhar e Desempilhar ==> Depois dele terminar as recursividades e o ponto de parada for verdadeiro, será usado tudo que esta abaixo da recursividade de acordo com a quantidade de vezes que foi usado a recursividade.


void imprimir(int n){ //Crescente
    if(n == 0){
        printf("\nN=%d",n); 
    }else{
        imprimir(n-1);     
        printf("\nN=%d",n);
    }
}

int main(){
    int n;
    printf("Digite um valor maior que ZERO: ");
    scanf("%d",&n);
    if(n >= 0){
        imprimir(n);
    }else{
        return 0;
    }
}



