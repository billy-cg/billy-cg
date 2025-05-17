#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y ceros.
9

*/

int main(){
        int N=10, numero, positivos = 0, negativos = 0, ceros = 0;
        int porcentajePositivos, porcentajeNegativos, porcetajeCeros;


        for(int i=0;i<N;i++){
            cout << "numero_" <<i+1<< ":";
            cin >> numero;
          if(numero > 0){
            positivos++;
        } if (numero < 0){
            negativos++;
        } if (numero == 0){
            ceros++;
        }


  }
            cout << "porcentaje de positivos : " << (positivos*100)/10 << "%"<< endl;
            cout << "porcentaje de negativos : " << (negativos*100)/10 << "%"<< endl;
            cout << "porcentaje de ceros : " << (ceros*100)/10 << "%"<< endl;


    return 0;
}
