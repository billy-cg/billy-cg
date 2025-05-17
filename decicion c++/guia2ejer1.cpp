#include <iostream>
using namespace std;
 /**
  Hacer un programa para ingresar por teclado un número y luego emitir por pantalla
  un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
  Importante: Verifi que que el programa emita UN SOLO CARTEL.

 */

int main(){
        int numero;
    cout << "ingrse un numero: " ;
    cin >> numero;

    if(numero == 0){
        cout << "el numero es cero";

    }
    else{
       if(numero > 0){
            cout << "el nuemro es positivo";
       }
       else{
        cout << "el numero es negativo";
       }

    }
    return 0;

}
