#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número del 1 al 4
    cout << "Ingresa un número del 1 al 4: ";
    cin >> numero;

    // Imprimir la estación del año correspondiente
    switch (numero) {
        case 1:
            cout << "Primavera" << endl;
            break;
        case 2:
            cout << "Verano" << endl;
            break;
        case 3:
            cout << "Otoño" << endl;
            break;
        case 4:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "Número inválido. Por favor ingresa un número del 1 al 4." << endl;
    }

    return 0;
}

