#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero del 1 al 4
    cout << "Ingresa un n�mero del 1 al 4: ";
    cin >> numero;

    // Imprimir la estaci�n del a�o correspondiente
    switch (numero) {
        case 1:
            cout << "Primavera" << endl;
            break;
        case 2:
            cout << "Verano" << endl;
            break;
        case 3:
            cout << "Oto�o" << endl;
            break;
        case 4:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "N�mero inv�lido. Por favor ingresa un n�mero del 1 al 4." << endl;
    }

    return 0;
}

