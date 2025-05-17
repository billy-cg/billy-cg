#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar 5 números, luego informar los 2 mayores
 valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.


*/

int main()
{

    int numero, maximo1=0, maximo2=0;

    for(int i=1; i<=5; i++)
    {
        cout << "ingrese numero" << i << ":";
        cin >> numero;

        if(numero>maximo1)
        {
            maximo2=maximo1;
               maximo1=numero;


        }if (numero>maximo2&&numero!=maximo1){
                       maximo2=numero;
        }

    }






    cout<< maximo1<<endl;
    cout<< maximo2<< endl;
    return 0;
}
