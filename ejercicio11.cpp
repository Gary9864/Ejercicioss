#include <iostream>
using namespace std;

int main(){
    int numero1,numero2 ;
    cout << "Ingresa 2 numeros"<< endl;
    cout << "Numero 1: "<< endl;
    cin >> numero1;
    cout << "Numero 2: "<< endl;
    cin >> numero2;
    if (numero1 > numero2)
    {
        cout <<"El numero: "<<numero1 << " esta mas cerca de 100" << endl;
    }
    else{
        cout <<"El numero: "<<numero2 << " esta mas cerca de 100" << endl;
    }
    if (numero1>100)
    {
        cout << "El numero " << numero1 << " tiene que ser menor o igual a 100" << endl;
    }else if(numero2>100){
        cout << "El numero " << numero2 << " tiene que ser menor o igual a 100" << endl;
    }
    
      
    





    return 0;
}