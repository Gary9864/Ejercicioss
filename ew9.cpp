#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;
    int i = 1;

    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    // Validar que sea positivo
    if (numero < 0) {
        cout << "No se puede calcular el factorial de un numero negativo.\n";
        return 0;
    }
//calculamos epicamente el factorial porque somos pros aja
    while (i <= numero) {
        factorial = factorial * i;
        i++;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
