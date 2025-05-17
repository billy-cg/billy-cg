#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de números que fi naliza cuando se ingresan
  dos números consecutivos iguales, y luego informar el máximo. Cuando se ingresa el número
  repetido el mismo debe ser descartado.
  Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35.
  En este caso, el segundo número 22 no se analiza, solo sirve para fi nalizar el ingreso.
  Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55.
  En este caso, el segundo número 33 no se analiza, solo sirve para fi nalizar el ingreso.
  Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5, 88, 88. Se listará Máximo 88.
  En este caso, el segundo número 88 no se analiza, solo sirve para fi nalizar el ingreso.


*/

int main(){
     int numeroAnterior;
     int numeroActual;
     int maximo;
     bool primerNumero = true;

    cout << "Ingrese numeros (se detendra cuando ingrese dos numeros consecutivos iguales):" << endl;
    cin >> numeroActual;

    if (cin.fail()) {
        cout << "No se ingresaron numeros validos." << endl;
        return 1;
    }

    maximo = numeroActual;
    numeroAnterior = numeroActual;

    while (true) {
        cin >> numeroActual;

        if (cin.fail()) {
            cout << "Entrada invalida. El programa se detendra4." << endl;
            break;
        }

        if (numeroActual == numeroAnterior) {
            break;
        }

        if (primerNumero || numeroActual > maximo) {
            maximo = numeroActual;
        }

        numeroAnterior = numeroActual;
        primerNumero = false;
    }

    cout << "El maximo numero ingresado es: " << maximo << endl;

    return 0;
}
