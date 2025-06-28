#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingresa la altura del triangulo: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // imprime i asteriscos en la fila i
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
