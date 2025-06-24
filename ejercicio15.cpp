#include <iostream>
using namespace std;

int main(){

    int velocidad;
    cout <<"Ingrese la velocidad del auto en km/h" << endl;
    cin >> velocidad;

    if(velocidad > 80){
        cout <<"La multa es mayor" << endl;
    }else if(velocidad > 60){
        cout <<"Paga multa" << endl;
    }else{
        cout <<"No paga multa" << endl;
    }
    return 0;
}