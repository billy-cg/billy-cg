#include <iostream>
using namespace std;
/*
  Hacer un programa para ingresar por teclado tres n�meros
  e informar con una leyenda aclaratoria si los tres son
  todos distintos entre s�, caso contrario no emitir nada.
  Tener en cuenta: Si A es distinto de B y B es distinto de C,
  eso no significa que A y C sean distintos. Ejemplo: A=8,
  B=6 y C=8.



*/

int main(){
      int A, B, C;

      cout << "ingrese tres numeros:  "<< endl;
      cin >> A >> B >> C ;

      if (A != B){

      } else {

      }
      if (B != C){
             cout << " son distintos ";
      }else
           cout << " son iguales " ;

    return 0;
}
