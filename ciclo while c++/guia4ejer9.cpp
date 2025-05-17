#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de números que fi naliza
  cuando se ingresa un cero, luego informar el máximo de los pares.
  Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
  Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
  Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.


*/

int main(){
       int numero, maximoPar=0;

       cout << "ingrese un numero:";
       cin >> numero;

       while(numero!=0){

        if(numero%2==0 && numero>maximoPar){
                maximoPar=numero;
        }
           cout << "ingrese numero:";
           cin >> numero;
       }

           cout << "el maximo par es:" << maximoPar << endl;
    return 0;
}
