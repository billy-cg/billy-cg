#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar 10 números y guardarlos en un vector.
   Determinar e informar cuál es la suma de los valores del vector.


*/

int main(){

       int vector[10]; // declaracion de variable de 10 numero.
       int suma = 0;   // declaracion de contador.

       for(int i=0;i<10;i++){

           cin >> vector[i];
           suma+=vector[i];


       }
           cout << "la suma es: " << suma << endl;

    return 0;
}
