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
    
    cout << "la suma de todos los numeros es "<< suma << endl;




    return 0;
}