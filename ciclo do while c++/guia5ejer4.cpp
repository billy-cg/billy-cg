#include <iostream>
using namespace std;
/**
  Una empresa registr� las ventas que efectu� durante un d�a y para cada venta registr� los siguientes datos:
- N�mero de Art�culo Vendido (1 a 30)
- Cantidad de Unidades Vendidas
- Importe de la Venta
El lote fi naliza cuando se ingresa un registro con N�mero de Art�culo igual a 0. En el lote anterior no
 aparecen registros de los art�culos que por alguna raz�n no se hayan vendido durante el d�a. Los registros est�n agrupados por n�mero de art�culo.
Se pide determinar e informar:
a) La recaudaci�n total para cada uno de los art�culos vendidos. Se informa 1 resultado para cada uno de los grupos.
b) El n�mero de art�culo con mayor cantidad TOTAL de unidades vendidas.


*/

int main(){
       int numero, articulo, precio, cantidad, importe;

           cout << "grupo #: " ;
           cin >> numero;
         cantidad=0;
        while(numero!=0){


          do{


            cout << "numero de articulo:";
            cin >> articulo;
            cout<< "-------------------" << endl;
            cout << "cantidad vendida:";
            cin >> cantidad;
            cout << "precios de lista:$ ";
            cin >> precio;
            cout << "------------------" << endl;
            importe=cantidad*precio;
            cout << "importe total:$"<< importe << endl;
            cout << "cantidad vendida del articulo " << articulo << ":" << cantidad << endl;

             cout << "grupo #:";
             cin >> numero;

             cout << "numero de articulo:";
             cin >> articulo;

            }while(articulo!=0);



        }



    return 0;
}
