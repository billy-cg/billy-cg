#include <iostream>
using namespace std;
/**
Hacer un programa para que el usuario ingrese dos n�meros y luego el programa muestre por pantalla
 los n�meros entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n
 los n�meros entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.


*/

int main(){
     int n1, n2;
     int menor, mayor;
     cout << "ingrese n1: " ;
     cin >> n1 ;
     cout << "ingrese n2: ";
     cin >> n2 ;
          if(n1<n2){
            menor=n1;
            mayor=n2;

          }else{
               menor=n2;
               mayor=n1;

          }

           int i=menor+1;

     while(i<mayor ){
              cout << i << endl;
              i++;





     }

    return 0;
}
