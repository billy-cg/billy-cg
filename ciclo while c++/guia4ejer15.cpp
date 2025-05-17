#include <iostream>
using namespace std;
/**
   hacer un programa para ingresar una lista de números que fi naliza cuando se ingresa un cero,
   informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
   Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
   Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
   Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4


*/

int main(){
    int numero, maximo, maximo2;

    cout << "ingrese un numero:";
    cin >> numero;
    maximo=numero;

    while(numero!=0){

       cout << "ingrese otro numero:";
       cin >> numero;

       if(numero!=0&&numero>maximo){
              maximo2=maximo;
              maximo=numero;


       } if(numero>maximo2&&numero!=maximo){

              maximo2=numero;

       }



    }
          cout << maximo << endl;
          cout << maximo2 << endl;
    return 0;
}
