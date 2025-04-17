#include <iostream>
using namespace std;

class Matriz {
private:
    int matriz[3][3];

public:
    void llenar() {
        cout << "Ingrese los valores de la matriz 3x3:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    }

    void mostrar() {
        cout << "\nMatriz ingresada:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matriz[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void sumaElementos() {
        int suma = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                suma += matriz[i][j];
            }
        }
        cout << "\nLa suma de todos los elementos es: " << suma << endl;
    }
};

int main() {
    Matriz m;
    m.llenar();
    m.mostrar();
    m.sumaElementos();
    return 0;
}
