#include <iostream>
#include <cmath> // Incluye la librería para usar la función pow

using namespace std;

// Función para calcular la potencia
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

    // Calcula la potencia usando la función
    double resultado = calcularPotencia(base, exponente);

    // Muestra el resultado
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}

