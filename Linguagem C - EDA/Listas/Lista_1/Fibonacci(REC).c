#include <stdio.h>

//FIBONACCI com recursividade
//1 1 2 3 5 8 13 21
void fibonacci(int n,int j,int tam){
    int aux;
    printf("%d ",n);
    if(tam != 0){
        aux = n;
        n += j;
        j = aux;
        tam--;
        fibonacci(n,j,tam);
    }
}
int main(){
    int n = 0;
    int j = 1;
    int tam=20;
    fibonacci(n,j,tam);
    return 0;
}
