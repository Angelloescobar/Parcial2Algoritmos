#include <iostream>
#include <cmath> // Incluye la librer�a para usar la funci�n pow

using namespace std;

// Funci�n para calcular la potencia
double calcularPotencia(int base, int exponente) {
    return pow(base, exponente);
}

int main() {
    int base, exponente;

    // Solicita al usuario la base y el exponente
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    // Calcula la potencia usando la funci�n
    double resultado = calcularPotencia(base, exponente);

    // Muestra el resultado
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}

