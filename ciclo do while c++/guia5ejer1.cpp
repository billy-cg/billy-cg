#include <iostream>
using namespace std;
/**
  Se dispone de una lista de 10 grupos de n�meros y cada uno de los grupos estar� compuesto por 5 n�meros. Se pide determinar e informar:
a) Para cada uno de los 10 grupos la cantidad de n�meros positivos, negativos y ceros que lo componen. Se informan
 3 resultados para cada uno de los 10 grupos.
b) Para cada uno de los 10 grupos el �ltimo n�mero primo y en qu� orden apareci� en ese grupo,
 si en un grupo no hubiera n�meros primos informar con un cartel aclaratorio.
c) Informar cu�ntos n�meros impares hay en total entre los 10 grupos. Se informa un resultado al fi nal de todo.


*/

int main()
{
    int numero,primo, ultimo, impar=0;


    for(int grupo=1; grupo<=10; grupo++)
    {
        cout << "grupo #" << grupo << endl;


        int positivos=0, negativos=0, ceros=0;

        for(int j=1; j<=5; j++)
        {
            cout << "ingrese un numero:";
            cin >> numero;

            if(numero > 0)
            {
                positivos++;
            }
            if(numero < 0)
            {
                negativos++;
            }
            if(numero==0)
            {
                ceros++;
            }
            if(numero%j==0)
            {
                primo=numero;
            }
            if(primo=numero)
            {
                ultimo=primo;
            }
            if(numero%2!=0)
            {
                impar++;
            }

        }
        cout << "cantidad de numeros positivos:" << positivos << endl;
        cout << "cantidad de numeros negativos:" << negativos << endl;
        cout << "cantidad de ceros:" << ceros << endl;
        cout << "ultimo numero primo es:" << ultimo << endl;

    }
    cout << "total de numero impares es:" << impar << endl;




    return 0;
}
