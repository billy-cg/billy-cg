#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de n�meros que fi naliza
  cuando se ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
  Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
  Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.


*/

int main()
{
    int numero, pos=0, neg=0;


    cout << "ingresar un numero:";
    cin >> numero;

    while(numero !=0)
    {

        if(numero<0)
        {
            neg++;
        }
        if(numero>0)
        {
            pos++;
        }

        cout << "ingrese un numero:";
        cin >> numero;

    }
    cout << "los positivos son:" << pos << "," << "los negativos son: " << neg << endl;

    return 0;
}
