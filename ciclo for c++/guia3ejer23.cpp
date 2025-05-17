#include <iostream>
using namespace std;
/**
 Dada una lista de 10 n�meros enteros informar la cantidad de duplas de n�meros impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.
En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informar� que hay 4 duplas de n�meros impares ingresados consecutivamente.
Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informar� que hay 5 duplas de n�meros impares ingresados consecutivamente.
Aclaraci�n: S�lo hay que listar la cantidad de duplas de impares. No hay que mostrar c�mo est�n compuestas las duplas de n�meros.


*/

int main()
{
     int numeros[10];
         cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
          cin >> numeros[i];
    }


    int contador = 0;


    for (int i = 0; i < 9; i++) {
        if (numeros[i] % 2 != 0 && numeros[i + 1] % 2 != 0) {
            contador++;
        }
    }


      cout << "Cantidad de duplas de numeros impares: " << contador << endl;

    return 0;
}
