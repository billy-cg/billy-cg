#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se ingresaran
 est�n ordenados en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�.
 Ejemplo A: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n ordenados.
 Ejemplo B: si los n�meros que se ingresan son 8, 12, 12 y 14, entonces est�n ordenados.
 Ejemplo C: si los n�meros que se ingresan son 10, 8, 12 y 14, entonces est�n desordenados.



*/

int main(){
      int n1, n2, n3, n4;

      cout << "ingrese cuatro numeros: " <<endl;
      cin >> n1 >> n2 >> n3 >> n4;

      if((n1<n2)&&(n2<n3)&&(n3<n4)){
        cout << "cunjunto ordenado" << endl;
      }else {
        cout << "conjunto desordenado" << endl;
      }





    return 0;
}
