#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar por teclado tres números
y luego determinar e informar con una leyenda aclaratoria
si los tres son iguales entre sí, caso
contrario no emitir nada.
Tener en cuenta: Si A es igual a B y B es igual a C,
entonces A y C son iguales.

*/

int main(){
      int A, B, C;

      cout << "ingresar un numeros:  " << endl;
      cin >>   A ;
      cout << "ingrese otro numero:  " << endl;
      cin >> B ;
      cout << "ingrese el ultimo numero: " << endl;
      cin >> C ;

      if(A == B){

      }
      if (B == C){
        cout << "son iguales ";
      }

    return 0;
}
