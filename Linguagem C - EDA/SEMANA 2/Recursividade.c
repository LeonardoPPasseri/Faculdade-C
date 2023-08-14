
//CONTAGEM

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

#include <stdio.h>
void imprimir(int n){  //Crescente
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

--------------------------------------------/-------------------------------------------------

//FATORIAL

#include <stdio.h>
int fatorial(int n){ 
    if(n == 0 || n == 1){ // 1! ou 0! é igual a 1
        return 1;
    }else{
       return n * fatorial(n-1); // 5 * 4!
    }
}


int main(){
    int n,res;
    printf("Digite um valor maior que ZERO: ");
    scanf("%d",&n);
    if(n >= 0){
        res = fatorial(n);
        printf("\nResultado: %d",res);
    }else{
        printf("ERRO!Apenas numeros maiores ou iguais a 0");
    }
}

// !5 => 1*2*3*4*5


