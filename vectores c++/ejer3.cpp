#include <iostream>
using namespace std;
/**
Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el valor m�ximo y su posici�n dentro del vector.


*/

int main(){
      int vector[10];
      int contador=0;
      int posicion=0;
      int maximo=0;
      for(int i=0;i<10;i++){
           cout << "ingrese un numero" << (i + 1) << ":";
           cin >> vector[i];

         if(vector[i]>maximo){
            maximo=vector[i];
            posicion++;

         }
      }

         cout << maximo << endl ;
         cout << posicion << endl;
    return 0;
}
