#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar una lista de 8 números y luego
 informar si todos están ordenados en forma creciente. En caso de
 haber dos números “empatados” considerarlos como crecientes.
 Por ejemplo si la lista fuera:
 Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
 Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado


*/

int main()
{
    int numero, anterior;

    bool ordenado=true;

    for (int i=1; i<=5; i++)
    {

        cout << "numero" << i << ":" ;
        cin >> numero;

        if(i>1)
        {
            if(numero<anterior)
            {
                ordenado= false;
            }




        }

        anterior=numero;








    }
    if(ordenado)
    {

        cout << "el conjunto esta ordenado" << endl;
    }
    else
    {
        cout << "no estan ordenados" << endl;
    }

    return 0;
}
