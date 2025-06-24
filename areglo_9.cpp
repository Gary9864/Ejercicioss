#include <iostream>
using namespace std;

int main(){
    int n;
    int multi=1;
    cout << "cuantos numeros ingresaras"<< endl;
    cin>> n;
    int numeros[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingresa numero "<< i+1 <<":"<< endl;
        cin >> numeros[i];
        multi *= numeros[i];
    }
    
    cout << "la multiplicacion de todos los numeros es "<< multi << endl;




    return 0;
}