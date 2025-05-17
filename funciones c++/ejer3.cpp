#include <iostream>
using namespace std;
/**
 Hacer una función llamada EsPrimo que determine si un número es primo o no.
 La función debe recibir el número y devolver true si es primo o false si no lo es.
 La función no debe mostrar nada por pantalla.
 Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego un
 cartel indicando si el número ingresado es primo o no es primo.


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
