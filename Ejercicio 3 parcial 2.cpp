#include <iostream>
using namespace std;

// Funci�n para verificar si un n�mero es primo
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

    // Solicitar al usuario que ingrese un n�mero entero positivo
    cout << "Ingresa un n�mero entero positivo: ";
    cin >> numero;

    // Verificar si el n�mero es primo y mostrar el resultado
    if (esPrimo(numero)) {
        cout << numero << " es un n�mero primo." << endl;
    } else {
        cout << numero << " no es un n�mero primo." << endl;
    }

    return 0;
}

