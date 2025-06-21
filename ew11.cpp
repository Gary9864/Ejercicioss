#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingresa un numero entre el 1 y el 10: ";
        cin >> numero;

        if (numero < 1 || numero > 10) {
            cout << "Numero no valido, vuelve a ingresar por favor." << endl;
        }

    } while (numero < 1 || numero > 10);

    cout << "Tu numero es: " << numero << endl;

    return 0;
}
