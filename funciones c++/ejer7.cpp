#include <iostream>
using namespace std;
/**
 Escribir una funci�n CalcularMaximoAbsoluto que reciba dos n�meros y
 retorne el m�ximo absoluto de ambos. Por ejemplo el m�ximo absoluto de los n�meros -40 y 20 es 40.
 Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximoAbsoluto,
 emita luego el n�mero mayor absoluto de ambos.


*/
  int valorAbsoluto(int a, int b){
      return (a > b)? a:b ;

  }
int main(){
    int n1, n2;


    cout << "ingrese un numero:";
    cin >> n1;
    cout << "ingrese un nuemro:";
    cin >> n2;

    int max= valorAbsoluto(n1, n2);

    cout << "el valor absoluto entre dos numeros es:" << max << endl;


    return 0;
}
