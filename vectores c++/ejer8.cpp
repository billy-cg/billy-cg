#include <iostream>
using namespace std;
/**
 Dada una lista de números compuesta por 10 subgrupos y cada grupo separado
 del siguiente por un cero, se pide generar un vector de 10 elementos con
 el máximo de cada uno de los subgrupos. Luego mostrar los elementos del
 vector por pantalla.



*/

int main(){
        int subgrupo[10];
        int grupo[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


        for(int j=0;j<10;j++){
            cout << "grupo: "<< grupo[j] << endl;

           for(int i=0;i<10;i++){
               cout << "ingrese numero de subgrupo:";
               cin >> subgrupo[i];


           }


        }


    return 0;
}
