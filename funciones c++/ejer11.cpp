#include <iostream>
using namespace std;
/**
 Hacer una funci�n llamada contarDigitos que reciba por valor un n�mero entero y determine
 y devuelva la cantidad de d�gitos del n�mero. Por ejemplo, si se recibe el n�mero 840 debe devolver 3.
 Hacer un programa que, a partir de un n�mero que ingresa el usuario, informe por pantalla la cantidad
 de d�gitos del n�mero ingresado.
*/

 contarDigitos(int num){
   if(num==0){
    return 1;

   }

   int contador=0;
   while(num!=0){
    num/= 10;
    contador++;

   }

   return contador;
 }


int main(){
      int numero;

      cout << "ingrese un numero:";
      cin >> numero;
      cout << "el numero tiene" << " " << contarDigitos(numero) << " " << "digitos" << endl;

    return 0;
}
