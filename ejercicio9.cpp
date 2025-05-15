#include <iostream>
using namespace std;

int main (){
    int prom,faltas;
    cout << "¿cual es tu promedio?" << endl;
    cin >> prom;
    cout << "cuantas faltas tienes?" << endl;
    cin >> faltas;



    if (prom >= 85 && faltas >= 3){
        cout << "felicidades recibiras una beca" << endl;
    }else{
        cout << "Lo sentimos no recibiras una beca" << endl;
    }
    






    return 0;
}