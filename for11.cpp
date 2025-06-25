#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    // Pedir numero al usuario
    cout << "ingrese un numero positivo: ";
    cin >> numero;

    // Validar que sea positivo pq yo no quiero negativos (ns q otra cosa validar)
    if (numero < 0) {
        cout << "No se permiten numeros negativos." << endl;
    } else {
        // Usar for para sumar los digitoss
        for (int n = numero; n > 0; n /= 10) {
            suma += n % 10; // Sumar el ultimo digito (tengosueño)
        }

        // Mostrar resultado
        cout << "la suma de los dígitos del numero es: " << suma << endl;
    }

    return 0;
}
