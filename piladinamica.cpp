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

class PilaDinamica {
private:
    Nodo* cima;
public:
    PilaDinamica() {
        cima = nullptr;
    }

    bool estaVacia() {
        return cima == nullptr;
    }

    void push(int valor) {
        Nodo* nuevo = new Nodo(valor);
        nuevo->siguiente = cima;
        cima = nuevo;
        cout << "Elemento " << valor << " agregado a la pila." << endl;
    }

    void pop() {
        if (estaVacia()) {
            cout << "La pila está vacía, no se puede eliminar." << endl;
            return;
        }
        Nodo* aux = cima;
        cout << "Elemento " << aux->dato << " eliminado de la pila." << endl;
        cima = cima->siguiente;
        delete aux;
    }

    void mostrar() {
        if (estaVacia()) {
            cout << "La pila está vacía." << endl;
            return;
        }
        Nodo* actual = cima;
        cout << "Elementos en la pila: ";
        while (actual != nullptr) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }
};

int main() {
    PilaDinamica pila;

    pila.push(5);
    pila.push(10);
    pila.push(15);

    pila.mostrar();

    pila.pop();
    pila.mostrar();

    pila.pop();
    pila.pop();

    pila.pop();  // Intentar eliminar de pila vacía

    return 0;
}
