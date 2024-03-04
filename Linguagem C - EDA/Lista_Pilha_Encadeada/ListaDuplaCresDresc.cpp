#include <iostream>
#include <time.h>
using namespace std;

struct no{
    int info;
    struct no* ant;
    struct no* prox;
};
typedef struct no* noPtr;

noPtr topo = NULL;
noPtr fim = NULL;

int listavazia(){
    if(topo == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inserir(){
    noPtr p = new no;
    cout << "Digite o valor: ";
    cin >> p->info;
    if(listavazia()){
        topo = p;
        p->ant = fim;
        p->prox = topo;
        fim = p;
        
    }else{
        fim->prox = p;
        p->ant = fim;
        p->prox = topo;
        fim = p;
    }
}

void retirar(){
    noPtr p = topo;
    if(listavazia()){
        cout << "Lista Vazia" << endl;
    }else{
        if(topo->prox == topo){
            topo = NULL;
            fim = NULL;
            cout << "Lista Vazia" << endl;
        }else{
            topo = p->prox;
            topo->ant = fim;
            fim->prox = topo; //é preciso atualizar o fim->prox
            delete p;
            cout <<" Elemento retirado! "<< endl;
        }
    }
}

void listarCrescente(){
    noPtr aux = topo;
    if(listavazia()){
        cout << "Lista Vazia" << endl;
    }else{
        cout << "Lista: ";
        do{
            cout << aux->info << " ";
            aux = aux->prox;
        }while(aux != topo);
    }
    cout << endl;
}
void listarDecrescente(){
    noPtr aux = fim;
    if(listavazia()){
        cout << "Lista Vazia" << endl;
    }else{
        cout << "Lista: ";
        do{
            cout << aux->info << " ";
            aux = aux->ant;
        }while(aux != fim);
    }
    cout << endl;
}

int main(){
    int op;
    do{
        cout << "(1) -> Entrar" << endl;
        cout << "(2) -> Retirar" << endl;
        cout << "(3) -> Listar Crescente" << endl;
        cout << "(4) -> Listar Decrescente" << endl;
        cout << "(0) -> Sair" << endl;
        cin >> op;
        switch (op) {
            case 1:
                inserir();
                break;
            case 2:
                retirar();   
                break;
            case 3:
                listarCrescente();
                break; 
            case 4:
                listarDecrescente();
                break;
        }
    }while(op != 0);

    return 0;
}