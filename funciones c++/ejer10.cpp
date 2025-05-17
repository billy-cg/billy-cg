#include <iostream>
#include <string>
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
 void obtenerNaipe(int codigo, int& numero, string& palo){
      vector <string> palos = {"espada", "basto", "copa", "oro"};
      if (codigo < 1 || codigo > 40){

          numero = -1;
          palo = "codigo invalido";
          return;
      }
   int indicePalo = (codigo - 1)/ 10;
   int valorRelativo =(codigo - 1) % 10 + 1;

   if(valorRelativo <=7){
    numero = valorRelativo;
   }else {
    numero = valorRelativo + 2;
   }

  palo = palos[indicePalo];
 }
int main(){
       int codigo, numero;
       string  palo;


       obtenerNaipe(codigo, numero, palo);


       if(numero != -1){
        cout << "el naipe es el" << numero << " de " << palo << endl;

       }else {
        cout << "codigo invalido" << endl;
       }


    return 0;
}
