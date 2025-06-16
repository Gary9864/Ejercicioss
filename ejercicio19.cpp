#include <iostream>
using namespace std;
int main (){
    int consumo, total;
    cout << "Cuanto ha sido su consumo de energia electrica en este mes ";
    cin >> consumo;
    if (consumo < 100){
        cout << "Su tarifa es menor a 100 kWh";
    } else if (consumo = 100 && consumo <=200){
        cout << "Su tarifa es media";
    } else {
        cout << "Su tarifa es alta";
    }
    return 0;
}