#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void setDatos(string n, int e) {
        nombre = n;
        edad = e;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main() {
    Persona p;
    string nombre;
    int edad;

    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la edad: ";
    cin >> edad;

    p.setDatos(nombre, edad);
    p.mostrarDatos();

    return 0;
}
