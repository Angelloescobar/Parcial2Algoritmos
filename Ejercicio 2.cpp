#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;

    // Leer las longitudes de los lados del tri�ngulo
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    // Verificar el tipo de tri�ngulo
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El tri�ngulo es equil�tero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "El tri�ngulo es is�sceles." << endl;
    } else {
        cout << "El tri�ngulo es escaleno." << endl;
    }

    return 0;
}

