#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar un número entero y
 luego informar la cantidad de divisores de ese número.
 Ejemplo A. Si se ingresa 6 se listará: 4 divisores.
 Ejemplo B. Si se ingresa 9 se listará: 3 divisores.
 Ejemplo C. Si se ingresa 11 se listará: 2 divisores.

*/

int main(){
     int numero;
     int cantidad=0;
     cin >> numero;

     for (int i=1;i<=numero;i++){

        if(numero%i==0){
           cantidad++;

        }




     }

           cout << numero <<   "tiene:"  << cantidad <<   "divisores" << endl;

    return 0;
}
