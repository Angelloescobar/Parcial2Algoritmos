#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    cout << "Ingresa un n�mero: ";
    cin >> numero;

    // Generar y mostrar la tabla de multiplicar
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}

