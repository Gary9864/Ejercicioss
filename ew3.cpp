#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;  // Numero fijo para adivinar
    int intento = 0;

    cout << "Adivina el numero entre 1 y 100.\n";

    while (true) {
        cout << "Introduce tu intento: ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el numero.\n";
            break;
        }
        else if (intento < numeroSecreto) {
            cout << "El numero es mayor. Intenta de nuevo.\n";
        }
        else {
            cout << "El numero es menor. Intenta de nuevo.\n";
        }
    }

    return 0;
}
