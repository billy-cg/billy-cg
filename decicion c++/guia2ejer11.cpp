#include <iostream>
using namespace std;
/*
  Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
  números son positivos, cuantos son negativos y cuantos son iguales a 0.

*/

int main(){
      int n1, n2, n3, n4, n5;
      int positivos = 0, negativos = 0, ceros = 0;
      cout << "ingrese 5 numeros: "<<endl;
      cin >> n1 >> n2 >> n3 >> n4 >> n5;
      if (n1>0){
        positivos++;
      }else if(n1<0){
        negativos++;
      }else{
        ceros++;
      }
       if (n2>0){
        positivos++;
      }else if(n2<0){
        negativos++;
      }else{
        ceros++;
      }
      if (n3>0){
        positivos++;
      }else if(n3<0){
        negativos++;
      }else{
        ceros++;
      }
      if (n4>0){
        positivos++;
      }else if(n4<0){
        negativos++;
      }else{
        ceros++;
      }
      if (n5>0){
        positivos++;
      }else if(n5<0){
        negativos++;
      }else{
        ceros++;
      }
      cout << "numeros positivos: "<< positivos <<endl;
      cout << "numeros negativos: "<< negativos <<endl;
      cout << "numeros iguales a 0: "<< ceros <<endl;

    return 0;
}
