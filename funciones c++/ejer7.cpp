#include <iostream>
using namespace std;
/**
 Escribir una función CalcularMaximoAbsoluto que reciba dos números y
 retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los números -40 y 20 es 40.
 Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto,
 emita luego el número mayor absoluto de ambos.


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
