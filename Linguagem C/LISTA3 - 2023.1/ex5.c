#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_maior(int num1,int num2,int num3){
    int res;

    if(num1 > num2 && num1 > num3){
        res = num1;
        return res;
    }
    if(num2 > num1 && num2 > num3){
        res = num2;
        return res;
    }
    if(num3 > num1 && num3 > num2){
        res = num3;
        return res;
    }
}

int main(){
    int num1,num2,num3;

    printf("Digite 3 numeros diferentes:");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("\nMaior numero: %d",calcular_maior(num1,num2,num3));

}
