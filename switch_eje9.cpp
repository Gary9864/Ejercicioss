#include <iostream>
using namespace std;

int main() {
  int numero_mes;

  //el numero tieneque ser entre el 1 y 12
  cout << "Ingrese el numero del mes" << endl;
  cin >> numero_mes;

  switch (numero_mes) {
    case 1:
      cout << "Enero tiene 31 dias." << endl;
      break;
    case 2:
      cout << "Febrero tiene 28 dias (29 en año bisiesto)" << endl;
      break;
    case 3:
      cout << "Marzo tiene 31 dias" << endl;
      break;
    case 4:
      cout << "Abril tiene 30 dias" << endl;
      break;
    case 5:
      cout << "Mayo tiene 31 dias" << endl;
      break;
    case 6:
      cout << "Junio tiene 30 dias" << endl;
      break;
    case 7:
      cout << "Julio tiene 31 dias" << endl;
      break;
    case 8:
      cout << "Agosto tiene 31 dias" << endl;
      break;
    case 9:
      cout << "Septiembre tiene 30 dias" << endl;
      break;
    case 10:
      cout << "Octubre tiene 31 dias" << endl;
      break;
    case 11:
      cout << "Noviembre tiene 30 dias" << endl;
      break;
    case 12:
      cout << "Diciembre tiene 31 dias" << endl;
      break;
    default:
      cout << "Mes invalido. Intentelo de nuevo" << endl;
      break;
  }

  return 0;
}
