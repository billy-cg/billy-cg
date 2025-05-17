#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listar� M�ximo 55.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listar� M�ximo -6
El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el m�ximo es un positivo.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.


*/

int main(){

       int numero;
       int maximo=0;


        for(int i=1;i<=10;i++){
            cout << "numero_" <<i<< ":";
            cin >> numero;
           if(i == 1 || numero > maximo){
                maximo=numero;
           }

        }
           cout << "el maximo es: " << maximo << endl ;

    return 0;
}
