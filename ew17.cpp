#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;
    cout << "Ingresa el dividendo: ";
    cin >> dividendo;
    cout << "Ingresa el divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "NO se puede dividir entre cero." << endl;
        return 1; // salir del programa
    }

    int cociente = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;//restas sucesivas
        cociente++;
    }

    cout << "Resultado de la division: " << cociente << endl;
    cout << "Residuo: " << dividendo << endl;

    return 0;
}
