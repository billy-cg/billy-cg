#include <iostream>
using namespace std;
/**
 Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.


*/

int main(){

       for(int i = 2; i <= 10000; i++) {
        bool esPrimo = true;

        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                esPrimo = false;
                break;
            }
        }

        if(esPrimo) {
            cout << i << " es primo" << endl;
        }
    }


    return 0;
}
