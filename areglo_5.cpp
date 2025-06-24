#include <iostream>
using namespace std;

int main(){
    int n;
    int suma=0;
    cout << "cuantos numeros ingresaras"<< endl;
    cin>> n;
    int numeros[n];
    int par = 0;
    int impar = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "ingresa numero "<< i+1 <<":"<< endl;
        cin >> numeros[i];

        if (numeros[i]%2 ==0)
        {
            par++;
        }else{
            impar++;
        }
        
        
    }

    
    cout << "La cantidad de numeros pares son: "<< par << endl;
    cout << "La cantidad de numeros impares son: "<< impar << endl;



    return 0;
}