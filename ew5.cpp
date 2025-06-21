#include <iostream>
using namespace std;
int main (){
    int numero,suma = 0, i = 1;
    cout << "ingresa un numero";
    cin >> numero;
    while (i <= numero){
        if (i % 2 == 0){
         suma += i;
        }
        i++;
    }
    cout << "la suma de los pares es " << suma << endl;

    return 0;
}