#include <iostream>
using namespace std;
 /**
   Hacer un programa para ingresar un N valor que indica la cantidad de n�meros que componen una lista
y luego solicitar se ingresen esos N n�meros. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listar�: Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listar�: Cantidad de Positivos: 0


 */

int main(){
       int n, numero, positivos = 0;

       cout << "ingrese la cantida de numeros: ";
       cin >> n;

       for(int i = 0; i < n; i++){
           cout << "ingrese el numero"<<i+1<< ":";
           cin >> numero;

           if(numero>0){
            positivos++;
           }
       }
           cout << "cantidad de positivos:"<<positivos<<endl;

    return 0;
}
