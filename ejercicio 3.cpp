#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout<< "ingrese el primer numero: \n";
    cin >> num1;
    cout<< "ingrese el segundo numero: \n";
    cin >> num2;

    if (num1 >num2){
        cout << "el primer numero"<< num1 << "es mayor que el segundo" << num2 << "."<< endl;
    }else if (num1 < num2){
        cout << "el segundo numero"<< num2 << "es mayor que el primero" << num1 << "." << endl;
    }else{
        cout << "ambos numeros son iguales." << endl;
    }

    return 0;









}