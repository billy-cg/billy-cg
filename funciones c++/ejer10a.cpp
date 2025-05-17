#include <iostream>
#include <vector>
using namespace std;
/**
 Hacer una función que reciba un código de naipe (del 1 al 40) y determine el número y
 el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines del mazo).
 La función debe recibir por referencia el número de naipe y el nombre del palo
 (para ser completados por la función) y por valor el código de naipe.
 Tener en cuenta que:
 Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al
 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/



int main(){
     vector<string> palos = {"espada", "basto", "oro", "copa"};


     for(string palo:palos){
        cout << palo <<endl;
     }

    return 0;
}
