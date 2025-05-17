#include <iostream>
using namespace std;
/**
 Dada una lista de 7 números enteros informar el primer número par ingresado y
  su ubicación en la lista y el último de los números primos y su ubicación
  en la lista.
   Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.


*/

int main(){
      int numeros[7];
  cout << "Ingrese 7 números enteros:" << endl;
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
