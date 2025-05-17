#include <iostream>
using namespace std;
/**
   Leer 10 números y guardarlos en un vector. Calcular el promedio y
    luego mostrar por pantalla los valores que son mayores al promedio.


*/


int main(){
    int vector[10];
    float suma = 0;
    float promedio;
    int numeroMayoresAPro = 0;  // Contador de numeros mayores al promedio


    for(int i = 0; i < 10; i++){
        cout << "ingrese un numeros:";
        cin >> vector[i];
        suma += vector[i];
    }

    // Calcular promedio (una sola vez, fuera del bucle)
    promedio = suma / 10;

    // Mostrar suma y promedio
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    // Mostrar valores mayores al promedio
    cout << "Numeros mayores al promedio: ";
    for(int i = 0; i < 10; i++){
        if (vector[i] > promedio) {
            cout << vector[i] << " ";
            numeroMayoresAPro++;  // Aumentar contador
        }
    }

    cout << endl;
    cout << "Cantidad de numeros mayores al promedio: " << numeroMayoresAPro << endl;

    return 0;
}
