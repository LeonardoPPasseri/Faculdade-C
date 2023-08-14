#include <stdio.h>
// 1! ou 0! é igual a 1
// 5 * 4!
int fatorial(int n){ 
    if(n == 0 || n == 1){
        return 1;
    }else{
       return n * fatorial(n-1); 
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