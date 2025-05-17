#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de números que fi naliza cuando se ingresan dos números positivos
 consecutivos, y luego informar el máximo. Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser descartado.
 Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20.
 En este caso, el segundo número positivo consecutivo, el 10, no se analiza, sólo sirve para fi nalizar el ingreso.
 Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55.
 En este caso, el segundo número positivo consecutivo, el 120, no se analiza, sólo sirve para fi nalizar el ingreso.




*/

int main()
{
    int numeroAnterior;
    int numeroActual;
    int maximo;
    bool primerNumero=true;

    while(true)
    {
        cout << "ingrese un numero";
        cin >> numeroActual;


        if(primerNumero)
        {
            numeroAnterior =numeroActual;
            maximo =numeroActual;
            primerNumero=false;






        }
        else{ if(numeroActual>maximo)
        {
            maximo=numeroActual;
        }


        if(numeroActual>0 && numeroAnterior>0)
        {
            cout << maximo << endl;
            break;

    numeroAnterior=numeroActual;
        }
        }
    }

    return 0;
}
