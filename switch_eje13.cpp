#include <iostream>
using namespace std;

int main() {
  int mes;
  string signo;
  cout << "Ingresa el mes de nacimiento: ";
  cin >> mes;

  switch (mes) {
    case 1:
        signo = "Acuario";    
        break;
    case 2:
        signo = "Piscis";         
        break;
    case 3:
        signo = "Aries";         
        break;
    case 4:
        signo = "Tauro";         
        break;
    case 5:
        signo = "Geminis";      
        break;
    case 6:
        signo = "Cancer";         
        break;
    case 7:
        signo = "Leo";        
        break;
    case 8:
        signo = "Virgo";          
        break;
    case 9:
        signo = "Libra";         
        break;
    case 10:
        signo = "Escorpio";       
        break;
    case 11:
        signo = "Sagitario";      
        break;
    case 12:
        signo = "Capricornio";    
        break;
    default:
        signo = "Mes invalido";
  }

  cout << "Tu signo zodiacal es: " << signo << endl;

  return 0;
}