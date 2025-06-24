#include <iostream>
using namespace std;

int main() {
  int mes;
  string signo;
  cout << "Ingresa el mes de nacimiento: ";
  cin >> mes;

  switch (mes) {
    case 1:
      signo = "Acuario" << endl;    
      break;
    case 2:
      signo = "Piscis" << endl;         
      break;
    case 3:
      signo = "Aries" << endl;         
      break;
    case 4:
      signo = "Tauro" << endl;         
      break;
    case 5:
      signo = "Geminis" << endl;      
      break;
    case 6:
      signo = "Cancer" << endl;         
      break;
    case 7:
      signo = "Leo" << endl;        
      break;
    case 8:
      signo = "Virgo" << endl;          
      break;
    case 9:
      signo = "Libra" << endl;         
      break;
    case 10:
      signo = "Escorpio" << endl;       
      break;
    case 11:
      signo = "Sagitario" << endl;      
      break;
    case 12:
      signo = "Capricornio" << endl;    
      break;
    default:
      signo = "Mes invalido" << endl;
  }

  cout << "Tu signo zodiacal es: " << signo << endl;

  return 0;
}