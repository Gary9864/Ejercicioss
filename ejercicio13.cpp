#include <iostream>
using namespace std;

int main() {
    int notas;
    cout << "Ingresa tus notas por favor en una escala del 0 al 100" << endl;
    cin >> notas;

    if (notas >= 90 && notas <= 100) {
        cout << "TU CALIFICACION ES: A" << endl;
    } else if (notas >= 80 && notas <= 89) {
        cout << "TU CALIFICACION ES: B" << endl;
    } else if (notas >= 70 && notas <= 79) {
        cout << "TU CALIFICACION ES: C" << endl;
    } else if (notas >= 60 && notas <= 69) {
        cout << "TU CALIFICACION ES: D" << endl;
    } else if (notas >= 0 && notas < 60) {
        cout << "TU CALIFICACION ES: F" << endl;
    } else {
        cout << "Nota fuera de rango. Ingresa un valor entre 0 y 100." << endl;
    }

    return 0;
}
