#include <iostream>
using namespace std;

struct no {
    int info;
    struct no* prox;
};

typedef struct no* noPtr;
noPtr topo = NULL;

int listavazia() {
    return topo == NULL;
}

void entrar() {
    noPtr p = new no;
    cout << "Digite um numero";
    cin >> p->info;
    p->prox = topo;
    topo = p;
}

void retirar() {
    noPtr p;
    if (listavazia()) {
        cout << "Lista Vazia!" << endl;
    } else {
        p = topo;
        topo = p->prox;
        delete p;
        cout << "O elemento foi retirado da lista!" << endl;
    }
}
void listar() {
    noPtr p = topo;
    if (listavazia()) {
        cout << "Lista Vazia!" << endl;
    } else {
        cout << "Itens na lista: ";
        while (p != NULL) {
            cout << p->info << " ";
            p = p->prox;
        }
        cout << endl;
    }
}

int main() {
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
