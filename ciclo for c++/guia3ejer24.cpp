#include <iostream>
using namespace std;
/**
 Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
- El sueldo máximo.
- El sueldo mínimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.


*/

int main()
{

    int sueldo, sueldoMaximo, sueldoMinimo, sueldoMayores=0;
    int suma=0;

    for(int i=1; i<=3; i++)
    {

        cout << "sueldo" << i << ":";
        cin >> sueldo;
        suma+=sueldo;
        if(i==1)
        {

            sueldoMaximo=sueldo;
            sueldoMinimo=sueldo;


        }


        if(sueldo>sueldoMaximo)
        {
            sueldoMaximo=sueldo;

        }
        if(sueldo < sueldoMinimo)
        {
            sueldoMinimo=sueldo;

        }if(sueldo>50000){
          sueldoMayores++;
        }





    }


    cout << "sueldo maximo:" << sueldoMaximo << endl;
    cout << "sueldo minimo:" << sueldoMinimo << endl;
    cout << "sueldo promedio:" << suma/(float)3 <<  endl;
    cout << "sueldo mayores a 50000: " << sueldoMayores << endl;
    return 0;
}
