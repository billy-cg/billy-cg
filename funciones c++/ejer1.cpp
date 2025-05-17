#include <iostream>
using namespace std;
/**
 Hacer una función llamada EsPar que determine si un número es par o no.
 La función debe recibir un número entero por valor y devolver true si es par
 o false si no lo es. La función no debe mostrar nada por pantalla.
 Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un
 cartel indicando si el número ingresado es par o no es par.


*/

  esPar(int n1){
     if(n1%2==0){
        return true;
     }else {
        return false;
     }
  }







int main(){
       int numero;

       cout << "ingre un numero:";
       cin >> numero;

       if(esPar(numero)){

            cout << "el numero es par" << endl;
       }

    return 0;
}
