#include <iostream>
using namespace std;
/**
 Hacer una funci�n llamada EsPrimoSophieGermain que reciba un n�mero entero y determine
 si el mismo es un n�mero primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
 NOTA: En teor�a de n�meros, se dice que un n�mero natural es un n�mero primo de
 Sophie Germain, si el n�mero n es primo y 2*n+1 tambi�n lo es.


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
