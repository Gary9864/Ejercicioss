#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1; 

    // Pedimos al usuario que ingrese un num
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;

    // Verificamos que el num no sea negativo
    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        // Usamos un ciclo for para calcular el factorial
        for (int i = 1; i <= numero; i++) {
            factorial *= i; // Multiplicamos factorial por i en cada paso
        }

        // Mostramos el resultado final
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
