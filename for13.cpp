#include <iostream>
using namespace std;

int main() {
    int num, i, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0;
}
