#include <iostream>
#include <math.h>
using namespace std;
/**
 Hacer una función llamada esNumeroArmstrong que reciba un número entero y
 devuelva true si el número enviado es un Número Armstrong y false si no lo es.
 NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas
 a la cantidad de cifras del número da como resultado N.

 Por ejemplo:
 371 tiene 3 cifras.

 Luego:
 3^3 + 7^3 + 1^3 → 371
 27 + 343 + 1 → 371
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
 bool esArmstrong(int num){
    if(num<0);
    return false;

    int numeroOriginal = num;
    int numeroDigitos = contarDigitos(num);
    int sumaPotencia = 0;
    int digitos;

    while(num>0){
        digitos = num%10;
        sumaPotencia += pow(digitos, numeroDigitos);
        num/=10;

    }
    return sumaPotencia == numeroOriginal;
 }


int main(){
       int numero;
        cout << "ingrese un numero:";
        cin >> numero;
        if(esArmstrong(numero)){
            cout << "es numero Armstrong" << endl;

        }   else {
            cout << "no lo es" << endl;
        }

    return 0;
}
