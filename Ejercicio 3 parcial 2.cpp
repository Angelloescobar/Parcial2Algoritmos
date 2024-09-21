#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;

    // Verificar si el número es primo y mostrar el resultado
    if (esPrimo(numero)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}

