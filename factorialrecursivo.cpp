#include <iostream>
using namespace std;

class Factorial {
public:
    int calcular(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * calcular(n - 1);
        }
    }
};

int main() {
    Factorial f;
    int numero;

    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        int resultado = f.calcular(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}
