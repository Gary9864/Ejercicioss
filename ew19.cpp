#include <iostream>
using namespace std;

int main() {
    float numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    float aproximacion = 0.0;
    float incremento = 0.001; // precisión deseada

    // Probar valores hasta que el cuadrado de la aproximación sea mayor o igual al número
    while (aproximacion * aproximacion <= numero) {
        aproximacion += incremento;
    }

    // Restar una vez el incremento porque se pasó del valor real
    aproximacion -= incremento;

    cout << "Raiz cuadrada aproximada: " << aproximacion << endl;

    return 0;
}
