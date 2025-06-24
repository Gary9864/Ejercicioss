#include <iostream>
using namespace std;

int main(){
    int n;
    int suma=0;
    cout << "cuantos numeros ingresaras"<< endl;
    cin>> n;
    int numeros[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingresa numero "<< i+1 <<":"<< endl;
        cin >> numeros[i];
        suma += numeros[i];
    }
    float promedio = suma / n;
    
    cout << "la suma de todos los numeros es: "<< suma << endl;
    cout << "El promedio de la suma de los numeros es: "<< promedio << endl;





    return 0;
}