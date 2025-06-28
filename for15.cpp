#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos al usuario cuantos terminos quiere
    cout << "Ingresa la cantidad de terminos N: ";
    cin >> N;

    // recorremos desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        // Si el num es par, se imprime negativo
        if (i % 2 == 0) {
            cout << -i;
        } else {
            // si es impar, se imprime positivo
            cout << i;
        }

        // imprimimos coma solo si no es el ultimo termino
        if (i != N) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}
