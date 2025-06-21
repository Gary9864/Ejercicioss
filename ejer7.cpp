#include <iostream>
using namespace std;

int main() {
    int numero,facto= 1;
    cout << "Ingresa un número: ";
    cin >> numero;

    for (int i = numero; i > 1; i--){
        facto *= i;
    }
    cout <<"El factorial de "<< numero <<" es: "<<facto << endl;

    return 0;
}
