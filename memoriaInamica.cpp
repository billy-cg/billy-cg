#include <iostream>
using namespace std;
/*
la memoria dinamica te permite solicitar y lebrar memoria mientras tu progrma se esta ejecuntando 
en el mismomomento que estas ingresando valores o prosesando datos. 
es util para cuando nose sabe cuanta memoria se va a utilizar.

OPERADORES:

"new" : se usa para solicitar memoria 
"delete": se usa para liberar la memoria solicitada.
"nullptr": descarta el puntero ya utilizado o memoria para evitar colapsos 

*/

int main(){
//declaro un puntero de tipo entero
int* ptr_entero;

//asignar memoria dinamica para un entero.
ptr_entero = new int;

// asigno unn valor a la memoria.
*ptr_entero = 100;

// imprimo el valor.
cout << "el valor es: " << *ptr_entero << endl;

// libero la memoria utilizada.
delete ptr_entero;
ptr_entero = nullptr; // evito que se vuelva a utilizar el puntero.





    return 0;
}