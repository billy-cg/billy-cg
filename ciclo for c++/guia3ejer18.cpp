#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar un n�mero entero y luego informar
  todos los divisores pares de ese n�mero.
  Ejemplo A. Si se ingresa 6 se listar�: 2 y 6.
  Ejemplo B. Si se ingresa 8 se listar�: 2, 4 y 8.
  Ejemplo C. Si se ingresa 11 no se listar� nada.


*/

int main()
{
    int numero;

    cin >> numero;
    for (int i=1; i<=numero; i++)
    {



             if (numero%i==0&&i%2==0){


               cout << numero << "es divisible ppor los pares: " << i << endl;

             }

    }

    return 0;
}
