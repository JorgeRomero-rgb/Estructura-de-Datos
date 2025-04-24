#include <iostream>
using namespace std;

class Nodo {
public:
    int dato;
    Nodo* siguiente;
    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

class ColaDinamica {
private:
    Nodo* frente;
    Nodo* fondo;
public:
    ColaDinamica() {
        frente = nullptr;
        fondo = nullptr;
    }

    bool estaVacia() {
        return frente == nullptr;
    }

    void encolar(int valor) {
        Nodo* nuevo = new Nodo(valor);
        if (estaVacia()) {
            frente = nuevo;
            fondo = nuevo;
        } else {
            fondo->siguiente = nuevo;
            fondo = nuevo;
        }
        cout << "Encolado: " << valor << endl;
    }

    void desencolar() {
        if (estaVacia()) {
            cout << "La cola está vacía, no se puede desencolar." << endl;
            return;
        }
        Nodo* aux = frente;
        cout << "Desencolado: " << aux->dato << endl;
        frente = frente->siguiente;
        delete aux;
        if (frente == nullptr) {
            fondo = nullptr;
        }
    }

    void mostrar() {
        if (estaVacia()) {
            cout << "La cola está vacía." << endl;
            return;
        }
        Nodo* actual = frente;
        cout << "Elementos en la cola: ";
        while (actual != nullptr) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }
};

int main() {
    ColaDinamica cola;

    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    cola.mostrar();

    cola.desencolar();
    cola.mostrar();

    cola.desencolar();
    cola.desencolar();

    cola.desencolar();  // Probar desencolar cola vacía

    return 0;
}
