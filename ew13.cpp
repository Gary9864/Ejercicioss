#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cuantos terminos de la serie Fibonacci deseas mostrar? ";
    cin >> N;

    int a = 0; // primer termino
    int b = 1; // segundo termino
    int contador = 0;

    cout << "Serie de Fibonacci con " << N << " terminos:\n";

    while (contador < N) {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;
        contador++;
    }

    cout << endl;
    return 0;
}
