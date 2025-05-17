#include <iostream>
using namespace std;
/*
    Un negocio de perfumería efectúa descuentos según el importe de la venta.
    Si el importe es menor a $100 aplicar un descuento del 5%
    Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
    Si el importe es mayor a $500 aplicar un descuento del 15%

*/

int main(){
       float monto, descuento, total;

      cout << " ingrese el monto a pagar:$ " ;
      cin >> monto ;

          if (monto < 100) {
             descuento = (monto * 5)/100;
          }   else
          if (monto > 100 && 500){
                  descuento = ( monto * 10)/100;

          } else
             if(monto > 500 ){
                descuento = (monto * 15)/100;
             }



               total = monto - descuento;

      cout << " descuento:$ " << descuento << endl;
      cout << "total a pagar:$ " << total << endl;



    return 0;
}
