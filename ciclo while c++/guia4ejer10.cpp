#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de números que fi naliza cuando se ingresa un cero, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listará Máximo -5 Mínimo -42.
Observe que los ejemplos B y C dejan en claro que la suposición de que el máximo “seguramente” es
un positivo y el mínimo “seguramente” es un negativo, es incorrecta.


*/

int main()
{
    int numero, minimo, maximo;

    cout << "ingrese numero:" ;
    cin >> numero;

    while(numero!=0)
    {


        if(numero>maximo)
        {
            maximo=numero;

        }
        if(numero<maximo)
        {
            minimo=numero;

        }
        cout << "ingrese numero:";
        cin >> numero;



    }
    cout << " el maximo es:" << maximo << endl;
    cout << "el minimo es :" << minimo << endl;



    return 0;
}
