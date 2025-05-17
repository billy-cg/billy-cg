#include <iostream>
using namespace std;
/**
Este ejercicio lo resolverán en la parte de código de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:
Nombre
Tipo
Valor hora
C/C++
'C'
$ 7500
C#
'#'
$ 6100
Python
'P'
$ 5400
Go
'G'
$ 5000
Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int),
 el tipo de lenguaje (char) y si es urgente o no (bool)

*/

int main(){
         int horas, importe, pagar;
         char categorias;
         bool urgencia;


         cout << "ingrese tipo de lenguaje: " ;
         cin >> categorias;
         cout << "ingrese cantidad de horas: ";
         cin >> horas;
         cout << "ingrese si es con urgencia (1/0): ";
         cin >> urgencia;

         categorias = toupper(categorias);
         switch(categorias){
     case 'c':
        importe = horas*7500;
        break;
     case '#':
        importe = horas*6100;
        break;
     case 'p':
        importe = horas*5400;
        break;
     case 'g':
        importe = horas*5000;
         }
         if(urgencia){
             pagar=importe*1.2;
         } else {
             pagar=importe;
         }
          cout << "el importe a pagar es:" << "$" << pagar << endl;






    return 0;
}
