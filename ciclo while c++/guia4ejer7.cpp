#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de n�meros que fi naliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo -5.


*/

int main()
{
    int numero, maximo=0;

    cout << "ingre un numero:" ;
    cin >> numero;

    while(numero!=0)
    {

        if(numero>maximo)
        {

            maximo=numero;
        }

        cout << "ingrese un numero:";
        cin >> numero;



    }
    cout << "el maximo es :" << maximo << endl;
    return 0;
}
