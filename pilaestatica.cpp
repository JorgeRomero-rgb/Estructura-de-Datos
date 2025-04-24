#include <iostream>
using namespace std;

class PilaEstatica {
private:
    int pila[100];  // Tamaño máximo fijo
    int tope;
public:
    PilaEstatica() {
        tope = -1;
    }

    bool estaVacia() {
        return tope == -1;
    }

    bool estaLlena() {
        return tope == 99;
    }

    void push(int valor) {
        if (estaLlena()) {
            cout << "La pila está llena, no se puede agregar " << valor << endl;
            return;
        }
        tope++;
        pila[tope] = valor;
        cout << "Agregado a la pila: " << valor << endl;
    }

    void pop() {
        if (estaVacia()) {
            cout << "La pila está vacía, no se puede eliminar." << endl;
            return;
        }
        cout << "Eliminado de la pila: " << pila[tope] << endl;
        tope--;
    }

    void mostrar() {
        if (estaVacia()) {
            cout << "La pila está vacía." << endl;
            return;
        }
        cout << "Contenido de la pila: ";
        for (int i = tope; i >= 0; i--) {
            cout << pila[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PilaEstatica pila;

    pila.push(3);
    pila.push(6);
    pila.push(9);

    pila.mostrar
