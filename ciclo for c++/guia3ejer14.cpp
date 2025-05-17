#include <iostream>
using namespace std;
/**
 Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
15


*/

int main(){
       int numero;
       int contador =0, primero=0, segundo=0, anteultimo=0;


        for(int i=1;i<=7;i++){

             cout << "numero" << i << ":";
             cin >> numero;

              if (numero % 2 != 0&&contador==0) {
                   primero=numero;
                   contador++;


              } if(numero % 2 != 0&&contador==1){
                    segundo=numero;
                    contador++;


                }if(numero % 2 != 0&&contador==2){
                     anteultimo=numero;
                       contador++;
                 }


       }
            cout << "primer impar" << ":" << primero << endl;
            cout << "segundo impar" << ":" << numero << endl;
            cout << "anteultimo impar"<< ":" << anteultimo << endl;

    return 0;




}
