#include <iostream>
using namespace std;

/**
  Hacer un programa para ingresar por teclado dos n�meros
   y luego informar por pantalla con un cartel aclaratorio
   si el primer n�mero es m�ltiplo del segundo.
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
