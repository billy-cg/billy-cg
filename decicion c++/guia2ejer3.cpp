#include <iostream>
using namespace std;

/**
   Hacer un programa para ingresar por teclado un número
    y luego informar por pantalla con un cartel aclaratorio
     si el mismo es par o impar.
*/

int main(){
        int N1 ;
     cout << "ingrese un numero :";
     cin >> N1 ;

     if(N1%2==0){
          cout << "el numero es par";
    }
    else{
        if(N1%2==1){
            cout << "el numero es impar";

        }
    }
    return 0;
}
