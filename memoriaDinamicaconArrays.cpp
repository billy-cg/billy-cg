#include <iostream>
using namespace std;

/*
uso de memoria dinamica con arreglos.


*/



int main(){
      
    int tamanio;

    cout << "cuantos numeros vas a ingresar?: ";
    cin >> tamanio;

    // asignamos memoria dinamica parael arreglo de "tamanio" de tipo entero.
    int* ptr_arreglo = new int[tamanio];

    // llenamos el arreglo con un ciclo for
    for (int i = 0; i < tamanio; ++i){
        ptr_arreglo[i] = i * 10;
    }

    // imprimimos el contenido del arreglo
    cout << "el arreglo contiene: ";
    for (int i = 0; i < tamanio; ++i){
        cout << ptr_arreglo[i] << " ";
    }
    cout << endl;

    // liberamos la meoria del arreglo
    delete[] ptr_arreglo;     /// es importante especificar que es lo que estamos liberando en este caso [].
    ptr_arreglo = nullptr; 



    return 0; 
}