#include <iostream>
using namespace std;
/**
 Se defi ne a un n�mero entero como primo cuando tiene solamente dos divisores.
 Ejemplo A: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos divisores.
 Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
 Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
 Hacer un programa para ingresar un n�mero y luego informar con un
 cartel aclaratorio si el mismo es un n�mero primo o es n�mero no primo.


*/

int main()
{
    int numero, cantidad=0;
    bool primo=true;
    cin >> numero;

    for(int i=1; i<=numero; i++)
    {

        if(numero%i==0)
        {
            cantidad++;

        }
        if (cantidad>2)
        {
            primo=false;

        }


    }
    if(primo)
    {
        cout << numero << "no es primo" <<endl;

    }
    else
        cout << numero << "es primo" << endl;


    return 0;
}
