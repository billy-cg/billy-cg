#include <iostream>
using namespace std;
/**
 Hacer una función llamada EsPrimoSophieGermain que reciba un número entero y determine
 si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
 NOTA: En teoría de números, se dice que un número natural es un número primo de
 Sophie Germain, si el número n es primo y 2*n+1 también lo es.


*/

EsPrimoSophieGermain(int n)
{

    n=(2*n)+1;


    for(int i = 2 ; i < n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}




int main()
{
    int numero;
    cout << "ingrese un nuemro:";
    cin >> numero;

    if(EsPrimoSophieGermain(numero))
    {
        cout << "verdad" << endl;
    }
    else
    {
        cout << "falso" << endl;
    }

    return 0;
}
