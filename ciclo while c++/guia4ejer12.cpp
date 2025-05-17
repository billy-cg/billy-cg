#include <iostream>
using namespace std;
/**
 Dada una lista de números que fi naliza cuando se ingresa un cero, informar cual
  es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9


*/

int main()
{
    int numero, impar1=0, impar2=0, contador=0;


    cout << "ingrese numero:";
    cin >> numero;

    while(numero!=0)
    {

        if(numero%2!=0&&contador==0)
        {
            impar1=numero;
            contador++;
        }
        else if(numero%2!=0&&contador==1)
        {

            impar2=numero;
            contador++;

        }



        cout << "ingrese numero:";
        cin >> numero;

    }

    cout << "primer impar es:" << impar1 << endl;
    cout << "segundo impar es:" << impar2 << endl;


    return 0;
}
