#include <iostream>
using namespace std;
/**
 Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l
 es el valor m�ximo absoluto del vector. Por ejemplo 20, -43 y 5, el m�ximo absoluto es -43.


*/

int absoluto(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }
}

int main(){
      int vector[10];
      int maximoAbsoluto=0;
      int valorAbsolutoActual;

      for(int i=0;i<10;i++){
          cout << "ingre un numero" << (i+1) << ":" ;
          cin >> vector[i];

        int valorAbsolutoActual = absoluto(vector[i]);


        if (valorAbsolutoActual > absoluto(maximoAbsoluto)) {
            maximoAbsoluto = vector[i];
        }
    }

    cout << "El valor maximo absoluto del vector es: " << maximoAbsoluto << endl;

    return 0;
}
