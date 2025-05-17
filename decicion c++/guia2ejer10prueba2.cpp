#include <iostream>
using namespace std;


int main(){
       int n1, n2, n3, n4, n5, maximo, minimo;
       cout << "ingrese cinco numeros:"<<endl;
       cin >> n1 >> n2 >> n3 >> n4 >> n5;

       maximo = n1;
       minimo = n1;

       if(n2>maximo){
        maximo=n2;
       }if(n3>maximo){
        maximo=n3;
       }if(n4>maximo){
        maximo=n4;
       }if(n5>maximo){
        maximo=n5;
       }
        if(n2<minimo){
        minimo=n2;
        }if(n3<minimo){
        minimo=n3;
        }if(n3<minimo){
        minimo=n3;
        }if(n4<minimo){
        minimo=n4;
        }if(n5<minimo){
        minimo=n5;
        }
       cout << "el minimo es:"<<minimo<<endl;
       cout << "el maximo es:"<<maximo<<endl;
    return 0;
}
