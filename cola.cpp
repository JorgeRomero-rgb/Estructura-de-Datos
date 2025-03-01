//cola
#include <iostream>
using namespace std;

class Cola {
private:
    int datos[100];
    int frente;
    int final;

public:
    Cola() {
        frente = 0;
        final = -1;
    }

    void encolar(int valor) {
        if (final < 99) {
            final++;
            datos[final] = valor;
            cout << "Elemento " << valor << " encolado.\n";
        } else {
            cout << "La cola esta llena.\n";
        }
    }

    void desencolar() {
        if (frente <= final) {
            cout << "Elemento " << datos[frente] << " desencolado.\n";
            frente++;
        } else {
            cout << "La cola esta vacia.\n";
        }
    }

    void mostrar() {
        if (frente > final) {
            cout << "La cola esta vacia.\n";
        } else {
            cout << "Elementos en la cola: ";
            for (int i = frente; i <= final; i++) {
                cout << datos[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Cola c;
    int opcion, valor;

    do {
        cout << "\n1. Encolar\n2. Desencolar\n3. Mostrar\n4. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese un valor: ";
            cin >> valor;
            c.encolar(valor);
        } else if (opcion == 2) {
            c.desencolar();
        } else if (opcion == 3) {
            c.mostrar();
        }

    } while (opcion != 4);

    return 0;
}
