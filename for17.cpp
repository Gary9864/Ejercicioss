#include <iostream>
using namespace std;

// Funcion que devuelve la suma de los divisores propios delnum
int suma_divisores(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) { 
         // sse recorre solo hasta num/2 porque ningun divisor propio puede ser mayor a la mitad
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros perfectos a mostrar: ";
    cin >> N;

    int contador = 0; // cuenta loss num perfectos q hemos encontrado
    int num = 2;      // Comenzamos desde 2 porque 1 no es perfecto

    while (contador < N) {
        if (suma_divisores(num) == num) {
            cout << num << " ";
            contador++;
        }
        num++;
    }

    cout << endl;
    return 0;
}
