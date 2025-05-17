#include <iostream>
using namespace std;
/**
  Dada una lista de números que fi naliza cuando se ingresa un cero, informar cual
  es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.


*/

int main(){
      int numero, acumulador=0, primero=0,ultimo=0;

      cout << "ingrese un numero:";
      cin >> numero;

      while(numero!=0){

        if(numero%2!=0&&acumulador==0){
            primero=numero;
            acumulador++;


        } else if(numero%2!=0&&acumulador==1){
                   ultimo=numero;
                   acumulador++;

        }
          cout << "ingrese un numero:";
          cin >> numero;


      }
         cout << "el primer impar es:" << primero << endl;
         cout << "el ultimo impar es:" << ultimo << endl;
    return 0;
}
