#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de n�meros que fi naliza cuando se ingresan dos n�meros positivos
 consecutivos, y luego informar el m�ximo. Cuando se ingresa el segundo n�mero positivo consecutivo el mismo debe ser descartado.
 Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar� M�ximo 20.
 En este caso, el segundo n�mero positivo consecutivo, el 10, no se analiza, s�lo sirve para fi nalizar el ingreso.
 Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar� M�ximo 55.
 En este caso, el segundo n�mero positivo consecutivo, el 120, no se analiza, s�lo sirve para fi nalizar el ingreso.




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
