#include <iostream>
using namespace std;

class Matriz {
private:
    int datos[3][3];

public:
    void llenar() {
        cout << "Ingrese los valores para una matriz 3x3:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> datos[i][j];
            }
        }
    }

    void mostrar() {
        cout << "\nMatriz ingresada:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << datos[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matriz m;
    m.llenar();
    m.mostrar();
    return 0;
}
