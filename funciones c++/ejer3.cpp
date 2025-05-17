#include <iostream>
using namespace std;
/**
 Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o no.
 La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo es.
 La funci�n no debe mostrar nada por pantalla.
 Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego un
 cartel indicando si el n�mero ingresado es primo o no es primo.


*/

 bool esPrimo(int n){
      if(n <= 1){
        return false;

      }
     for(int i = 2 ; i < n;i++){
        if(n%i==0){
            return false;
        }
     }

     return true;
 }


int main(){
      int numero;

      cout << "ingrese un numero:";
      cin >> numero;

      if(esPrimo(numero)){
        cout << "es primo" << endl;
      }else {
      cout << "no es primo" << endl;
      }

    return 0;
}
