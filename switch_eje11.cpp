#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, resultado;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    char operador;
    cout << "Ingrese el tipo de operador (+, -, *, /, ^, %): " << endl;
    cin >> operador;

    int numero1 = static_cast<int>(num1);
    int numero2 = static_cast<int>(num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "La multiplicacion es: " << resultado << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: division por cero." << endl;
            } else {
                resultado = num1 / num2;
                cout << "La division es: " << resultado << endl;
            }
            break;
        case '^':
            resultado = pow(num1, num2);
            cout << "La exponenciacion es: " << resultado << endl;
            break;
        case '%':
            if (numero2 == 0) {
                cout << "Error: modulo por cero." << endl;
            } else if (num1 != numero1 || num2 != numero2) {
                cout << "Advertencia: El modulo solo se calcula con la parte entera de los numeros." << endl;
                cout << "Se usaran " << numero1 << " % " << numero2 << endl;
                int modulo = numero1 % numero2;
                cout << "El modulo es: " << modulo << endl;
            } else {
                int modulo = numero1 % numero2;
                cout << "El modulo es: " << modulo << endl;
            }
            break;
        default:
             cout << "Error: operador invalido. Debe ser uno de (+, -, *, /, ^, %)." << endl;
             break;
    }

    return 0;
}