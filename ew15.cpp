#include <iostream>
using namespace std;
int main (){
    int numero;
    cout << "Escribe un numero " <<endl;
    cin >> numero;
 

    while (numero >= 10) {
        int suma = 0;
        while (numero > 0) {
            suma += numero % 10;
            numero /= 10;
        }
        numero = suma;
    }

    cout << "El resultado final es: " << numero << endl;

    return 0;
}


 