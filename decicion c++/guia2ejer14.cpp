#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
 ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar la fecha actual ingresando d�a,
 mes y a�o como 3 datos individuales. Calcular luego la edad en a�os de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa
 persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18
ya que le faltan 2 d�as para cumplir los 19 a�os.

 d1 = dia nacimiento
 m2 = mes nacimiento
 a3 = a�o nacimiento

 n1 = dia actual
 n2 = mes actual
 n3 = a�o actual
*/

int main(){
     int d1, m2, a3, n1, n2, n3;
     int edad;
        cout << "ingrese su fecha de nacimiento : " << endl;
        cout << "DIA: ";
        cin >> d1;
        cout << "MES: ";
        cin >> m2;
        cout << "A�O: ";
        cin >> a3;
        cout << "ingrese la fecha actual: " << endl;
        cout << "DIA: ";
        cin >> n1;
        cout << "MES: ";
        cin >> n2;
        cout << "A�O: ";
        cin >> n3;
          edad = n3-a3;
        if(n2<m2||(n2==m2&&n1<d1)){
               edad--;


        }
        cout << "su edad es: "<< edad <<endl;


















    return 0;
}
