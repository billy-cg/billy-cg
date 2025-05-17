#include <iostream>
using namespace std;
/*
  Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.

*/

int main(){
         int N1, N2, N3, N4, N5,  maximo, minimo;

         cout << "ingrese cinco numeros : "<<endl;

         cin >> N1 >> N2 >> N3 >> N4 >> N5;


         if(N1>N2 && N1>N3 && N1>N4 && N1>N5){
                  maximo=N1;
         }else if(N2>N1&&N2>N3&&N2>N4&&N2>N5){
                  maximo=N2;
         }else if(N3>N1&&N3>N2&&N3>N4&&N3>N5){
                  maximo=N3;
         }else if(N4>N1&&N4>N2&&N4>N3&&N4>N5){
                  maximo=N4;
         }else{
               maximo=N5;
         }
          cout << "el maximo es: "<< maximo <<endl;

         if(N1<N2 && N1<N3 && N1<N4 && N1<N5){
                  minimo=N1;
         }else if(N2<N1&&N2<N3&&N2<N4&&N2<N5){
                  minimo=N2;
         }else if(N3<N1&&N3<N2&&N3<N4&&N3<N5){
                  minimo=N3;
         }else if(N4<N1&&N4<N2&&N4<N3&&N4<N5){
                  minimo=N4;
         }else{
               minimo=N5;
         }
          cout << "el minimo es: "<< minimo <<endl;

    return 0;
}
