#include <iostream>
using namespace std;

/**
  Hacer un programa para ingresar por teclado dos números
   y luego informar por pantalla con un cartel aclaratorio
   si el primer número es múltiplo del segundo.
*/

int main(){
           int N1, N2;
        cout << "ingrese dos numeros" << endl;
        cin >> N1 >> N2 ;

        if( N1%N2 == 0){
             cout << "el primero es multiplo de segundo";
        }
    return 0;
}
