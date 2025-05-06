#include <iostream>
using namespace std;

int main(void){
    int n;

    cout << "dame un numero impar  :\n";
    cin >> n;

    if(n % 2==0){
        cout << "Este numero no cuenta como impar\n";
    
    }else{
        cout << "tu numero es impar\n";
    }

    return 0;


}