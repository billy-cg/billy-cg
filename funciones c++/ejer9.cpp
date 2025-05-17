#include <iostream>
using namespace std;
/**
 Escribir una función que reciba un número y retorne 1 si el número
 recibido es perfecto y 0 si no es perfecto.
 Hacer un programa para que, dada una lista de números que finaliza
 con cero, informe cuántos de ellos eran perfectos. Utilizar la función solicitada.


*/
  int esPerfecto(int n){

    if(n<=0) return 0;
    int suma=0;

    for(int i=1;i< n;i++){

        if(n%i==0){
            suma+=i;

        }
    }
      return (suma == n)?1:0;




  }

int main(){
      int numero;
      int contadorPerfecto =0;

      cout << "ingre un numero:" << endl;

      while (true) {

        cout << "numero: ";
        cin >> numero;

        if (numero == 0) break;

        if (esPerfecto(numero)){
            contadorPerfecto++;

        }


      }
       cout << "cantidad de numeros perfecto:" << contadorPerfecto << endl;

    return 0;
}
