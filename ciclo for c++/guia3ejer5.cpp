#include <iostream>
using namespace std;
/**
 Hacer un programa para que el usuario ingrese dos n�meros y
 luego el programa muestre por pantalla los n�meros entre el menor y el mayor de ambos.
 Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15 y si
 el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.


*/

int main(){
         int n1, n2;

       cout << "ingrese un numero :" ;
       cin >> n1;
       cout << "ingrese otro numero: " ;
       cin >> n2;
// determinar el menor y el mayor de ellos

              int menor = (n1 < n2) ? n1 : n2;
              int mayor = (n1 > n2) ? n1 : n2;

             cout << "Los n�meros entre " << menor << " y " << mayor << " son:\n";
            for (int i = menor + 1; i < mayor; i++) {

                cout << i << endl;
            }

    return 0;
}
