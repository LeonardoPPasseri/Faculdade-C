#include <iostream>
using namespace std;

struct no{
    int tipo;
    struct no* prox;
};
typedef struct no* noPtr;

noPtr topo = NULL;
int ListaVazia(){
    if(topo == NULL){
        return 1;
    }else{
        return 0;
    }
}

void entrar(){
    noPtr aux, p = new no;
    cout << "Digite o valor: ";
    cin >> p -> tipo ;
    p -> prox = NULL;

    if(ListaVazia()){
        topo = p;
    }else{
        aux = topo;
        while(aux -> prox != NULL){
            aux = aux -> prox;
        }
        aux -> prox = p;

    }
}

void retirar(){
    noPtr aux;
    if(ListaVazia()){
        cout << "Lista Vazia!" << endl;
    }else{
        aux = topo;
        topo = aux -> prox;
        delete aux;
        cout << "O elemento foi retirado da lista!" << endl;
    }
}

void listar(){
    noPtr p = topo;
    if(ListaVazia()){
        cout << "Lista Vazia" << endl;
    }else{
        cout << "Itens da Lista: ";
        while(p != NULL){
            cout << p->tipo << " ";
            p = p -> prox;
        }
        cout << endl;
    }
}

int main(){
    int op;
    do {
        cout << "(1) -> Entrar" << endl;
        cout << "(2) -> Retirar" << endl;
        cout << "(3) -> Listar" << endl;
        cout << "(0) -> Sair" << endl;
        cin >> op;
        switch (op) {
            case 1:
                entrar();
                break;
            case 2:
                retirar();
                break;
            case 3:
                listar();
                break;
        }
    } while (op != 0);
    return 0;
}