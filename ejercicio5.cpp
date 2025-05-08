#include <iostream>
using namespace std;
int main (void){
    float compra, desc, total;
    cout << "INGRESA EL MONTO TOTAL DE LA COMPRA";
    cin >> compra;
if (compra >= 100){
    cout << "GRACIAS POR TU COMPRA, SE TE APLICARA UN DESCUENTO DEL 10% !!!";
desc = compra * 0.10;
total = (compra - desc) ;
cout << "\nTU MONTO A PAGAR ES = " << total ;
} else {
    cout << "\nGRACIAS POR TU COMPRA, TU MONTO A PAGAR ES = " << compra;
}

}