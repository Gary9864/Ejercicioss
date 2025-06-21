#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Dame un numero"<<endl;
    cin >> numero;
    // Ciclo while
    while (numero != 0) {
        cout << "Contador hacia atras en while: " << numero << endl;
        numero--; // Decrementa el contador
    }

    return 0;
}