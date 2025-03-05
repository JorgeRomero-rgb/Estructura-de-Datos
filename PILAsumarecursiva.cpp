PILA (LIFO) con vector

vector<int> pila;

// Agregar elemento (push)
pila.push_back(valor);  // se agrega al final (tope de la pila)

// Quitar elemento (pop)
if (!pila.empty()) {
    pila.pop_back();    // se quita el último agregado
}

// Ver el tope
if (!pila.empty()) {
    int tope = pila.back();
}

// Mostrar toda la pila
for (int i = pila.size() - 1; i >= 0; i--) {
    cout << pila[i] << endl;
}

Operaciones básicas:

// Agregar un número (Push):
if (tope < 100) {
    pila[tope] = valor;
    tope++; // sube el tope
}

//Quitar el último (Pop):
if (tope > 0) {
    tope--; // baja el tope
    int eliminado = pila[tope];
}

// Ver el tope (sin eliminar):
if (tope > 0) {
    int arriba = pila[tope - 1];
}

// Mostrar toda la pila:
for (int i = tope - 1; i >= 0; i--) {
    cout << pila[i] << endl;
}



