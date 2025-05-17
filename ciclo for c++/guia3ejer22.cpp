#include <iostream>
using namespace std;
/**
 Dada una lista de 7 n�meros enteros informar el primer n�mero par ingresado y
  su ubicaci�n en la lista y el �ltimo de los n�meros primos y su ubicaci�n
  en la lista.
   Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer n�mero par: 4 ubicaci�n 2. �ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer n�mero par: 6 ubicaci�n 7. �ltimo primo: 13 ubicaci�n 5.


*/

int main(){
      int numeros[7];
  cout << "Ingrese 7 n�meros enteros:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> numeros[i];
    }

    int primerPar = -1;
    int ubicacionPar = -1;
    int ultimoPrimo = -1;
    int ubicacionPrimo = -1;

    for (int i = 0; i < 7; i++) {
        if (numeros[i] % 2 == 0 && primerPar == -1) {
            primerPar = numeros[i];
            ubicacionPar = i + 1;
        }
        int esPrimo = 1;
        if (numeros[i] <= 1) esPrimo = 0;
        for (int j = 2; j * j <= numeros[i]; j++) {
            if (numeros[i] % j == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo == 1) {
            ultimoPrimo = numeros[i];
            ubicacionPrimo = i + 1;
        }
    }


    if (primerPar != -1) {
        cout << "Primer numero par: " << primerPar << " ubicacion " << ubicacionPar << endl;
    } else {
        cout << "No hay numeros pares en la lista" << endl;
    }

    if (ultimoPrimo != -1) {
        cout << "Ultimo primo: " << ultimoPrimo << " ubicacion " << ubicacionPrimo << endl;
    } else {
        cout << "No hay numeros primos en la lista" << endl;
    }


    return 0;
}
