#include <stdio.h>

//FATORIAL com recursividade
//n=5 --> 5! = 5*4! = 5*4*3! = ...
int fatorial(int n){
    
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
int main(){
    int n;
    printf("Digite o numero para ser o fatorial: ");
    scanf("%d",&n);
    int total = fatorial(n);
    printf("\nTotal: %d",total);

    return 0;
}
