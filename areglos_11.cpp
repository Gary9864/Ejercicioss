#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Cuantos numeros tendra cada arreglo "<< endl;
    cin >> n;

    int arreglo1[n], arreglo2[n], combinado[2 * n];

    cout << endl << "Llena el primer arreglo" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero #" << i + 1 << " del primer arreglo:"<< endl;
        cin >> arreglo1[i];
    }

    cout << endl << "Llena el segundo arreglo" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero #" << i + 1 << " del segundo arreglo:"<< endl;
        cin >> arreglo2[i];
    }

  
    for (int i = 0; i < n; i++) {
        combinado[i] = arreglo1[i];
    }
    for (int i = 0; i < n; i++) {
        combinado[n + i] = arreglo2[i];
    }

    cout << endl << " Arreglo combinado:" << endl;
    for (int i = 0; i < 2 * n; i++) {
        cout << combinado[i] << endl;
    }
    

    return 0;
}
