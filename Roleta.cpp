#include <iostream>
#include <time.h>
using namespace std;

struct no{
    int num;
    struct no* prox;
};
typedef struct no* noPtr;

noPtr fim = NULL;
noPtr topo = NULL;

int ListaVazia(){
    if(topo == NULL){
        return 1;
    }else{
        return 0;
    }
}

void listar(){  //Apenas faz a lista dos possiveis numeros [sempre vai de 0-10]
    noPtr p = topo;
    if(ListaVazia()){
        cout << "Lista Vazia" << endl;
    }else{
        cout << "Itens da Lista: ";
        for (int c = 0; c <= 10; c++){
            cout << p->num << " ";
            p = p -> prox;
        }
        cout << endl;
    }
}

void roleta() {  //Cria a roleta com lista encadeada que vai de 0-10
    for (int c = 0; c <= 10; c++) {
        if(ListaVazia()){
            noPtr p = new no;
            topo = p;
            p->num = c;
            p->prox = topo;
            fim = p;
        }else{
            noPtr p = new no;
            fim->prox = p;
            p->prox = topo;
            p->num = c;
            fim = p;
        }
    }
}
int sorteio(){ //Usa a aleatoriedade para escolher valor [x] que será usado para fazer a contagem do FOR 
               //Então se X = 44 então vai rodar a lista e escolher o numero que caiu no 44
               //Apos isso, será enviado para a main
    srand(time(NULL));
    int NumCerto;
    int roleta = ((rand()) % 1000);
    cout << "Numero de vezes que roletou: " << roleta << endl;
    noPtr p = topo;
    for (int c = 0; c < roleta; c++){
        p = p -> prox;
        NumCerto = p->num;
    }
    cout << "Numero que caiu na roleta: " << NumCerto << endl;;

    return NumCerto;
}

int main(){
    int valor;
    
    do{
    cout << "Digite um numero de 0 - 10: " << endl;
    cin >> valor;
    roleta();
    listar();
    
    if(sorteio() == valor){ //Aqui o numero retirado da função será comparado com o valor que 
                            // foi dado pelo usuario;
        cout << "Vitoria!!";
    }else{
        cout << "Derrota";
    }
    cout << endl;
    }while(valor != -1);

    return 0;
}
