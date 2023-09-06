void insertion(int vetor_C[]){
    int j,aux;
    for(int i=1;i<=TAM-1;i++){
        j = i-1;
        aux = vetor_C[i];
        while(j >= 0 && aux < vetor_C[j]){
            vetor_C[j+1] = vetor_C[j];
            j--;
        }
        vetor_C[j+1]=aux;
    }
}

//25 10 6 15 4 11 

for(int i=1;i<=MAX-1;i++){ 

i ==> 1  

j = i-1 ==> 0 

Aux = vetor[i]  ==> 10 

Vetor[j] ==> 25 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 10 < 25] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j+1] ==> 10 

Recebe 25 

Vetor[j+1] ==> 25 

//25 25 6 15 4 11 

j ==> -1 

while(j>=0 && aux < vetor[j]){ [FALSO j<0] 

}  

vetor[j+1] = aux; 

Vetor[j+1] ==> vetor[0] ==> 10 

 

//10 25 6 15 4 11 

for(int i=1;i<=MAX-1;i++){ 

i ==> 2  

j ==> 1 

Aux = vetor[i]  ==> 6 

Vetor[j] ==> 25 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 6 < 25] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j+1] ==> 6 

Recebe 25 

Vetor[j+1] ==> 25 

//10 25 25 15 4 11 

j ==> 1 

Vetor[j] ==> 10 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 6 < 10] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 10 

Vetor[j+1] ==> 25 

Recebe 10 

Vetor[j+1] ==> 10 

//10 10 25 15 4 11 

j ==> -1 

while(j>=0 && aux < vetor[j]){ [FALSO j<0] 

}  

vetor[j+1] = aux; 

Vetor[j+1] ==> vetor[0] ==> 6 

 

//6 10 25 15 4 11 

for(int i=1;i<=MAX-1;i++){ 

i ==> 3  

j ==> 2 

Aux = vetor[i]  ==> 15 

Vetor[j] ==> 25 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 15 < 25] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j+1] ==> 15 

Recebe 25 

Vetor[j+1] ==> 25 

//6 10 25 25 4 11 

j ==> 1 

Vetor[j] ==> 10 

while(j>=0 && aux < vetor[j]){ [FALSO 15 < 10] 

//6 10 25 15 4 11 

Vetor[j+1] ==> vetor[2] ==> 15 

 

//6 10 15 25 4 11 

for(int i=1;i<=MAX-1;i++){ 

i ==> 4  

j ==> 3 

Aux = vetor[i]  ==> 4 

Vetor[j] ==> 25 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 4 < 25] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j+1] ==> 4 

Recebe 25 

Vetor[j+1] ==> 25 

//6 10 15 25 25 11 

j ==> 2 

Vetor[j] ==> 15 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 4 < 15] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 15 

Vetor[j+1] ==> 25 

Recebe 15 

Vetor[j+1] ==> 15 

//6 10 15 15 25 11 

j ==> 1 

Vetor[j] ==> 10 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 4 < 10] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 10 

Vetor[j+1] ==> 15 

Recebe 10 

Vetor[j+1] ==> 10 

//6 10 10 15 25 11 

j ==> 0 

Vetor[j] ==> 6 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 4 < 6] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 6 

Vetor[j+1] ==> 10 

Recebe 6 

Vetor[j+1] ==> 6 

//6 6 10 15 25 11 

j ==> -1 

Vetor[j+1] ==> vetor[0] ==> 4 

 

//4 6 10 15 25 11 

for(int i=1;i<=MAX-1;i++){ 

i ==> 5  

j ==> 4 

Aux = vetor[i]  ==> 11 

Vetor[j] ==> 25 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 11 < 25] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 25 

Vetor[j+1] ==> 11 

Recebe 25 

Vetor[j+1] ==> 25 

//4 6 10 15 25 25 

j ==> 3 

Vetor[j] ==> 15 

while(j>=0 && aux < vetor[j]){ [VERDADEIRO 11 < 15] 

vetor[j+1] = vetor[j];  

            j--; 

Vetor[j] ==> 15 

Vetor[j+1] ==> 25 

Recebe 15 

Vetor[j+1] ==> 15 

//4 6 10 15 15 25 

j ==> 2 

Vetor[j] ==> 10 

while(j>=0 && aux < vetor[j]){ [FALSO 11 < 10] 

Vetor[j+1] ==> vetor[3] ==> 11 

 

//4 6 10 11 15 25 

for(int i=1;i<=MAX-1;i++){ [FALSO i = 6] 

/* 

FINALIZA A FUNÇÃO 

4 6 10 11 15 25 

*/