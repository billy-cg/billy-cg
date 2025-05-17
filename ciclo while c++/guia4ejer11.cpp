#include <iostream>
using namespace std;
/**
   Hacer un programa para ingresar una lista de números que fi naliza cuando
   se ingresa un cero, informar el máximo de los negativos y el mínimo de los positivos.
   jemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
   Máximo Negativo: -3.
   Mínimo Positivo: 2.


*/

int main(){
     int numero, maximoNegativo, minimoPositivo;

     cout << "ingrese el numero:";
     cin >> numero;

     while(numero!=0){

        if(numero < 0 && (maximoNegativo >= 0 || numero > maximoNegativo)){
            maximoNegativo=numero;

        }   if(numero > 0 && (minimoPositivo <= 0 || numero < minimoPositivo)){
               minimoPositivo=numero;
        }
            cout << "ingrese numero:";
            cin >> numero;

     }



             cout << "el maximo negativo es:" << maximoNegativo << endl;
             cout << "el minimo positivo es:" << minimoPositivo << endl;

    return 0;
}
