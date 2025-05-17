#include <iostream>
using namespace std;
/**
 Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
- Número de día (entero)
- Temperatura (fl oat)
- Milímetros de lluvia (fl oat)
- Visibilidad en km (fl oat)
Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
- El número del día que se haya registrado la temperatura máxima.
- La amplitud térmica de todo el período.
- La cantidad de días con neblina.
- Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda"
si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
28


*/

int main(){
          int dia, posicion, lluvia;
          float temperatura, miliLluvia, visibilidad;
          float temMaxima=0, temMinima=0, amplitud, niebla=0;
          int diasLluvia=0, totalDias=0;


        for(int i=1;i<=15;i++){
          cout << "ingrese dia:";
          cin >> dia;
          cout << "ingrese temperatura:";
          cin >> temperatura;
          cout << "milimetros de lluvia:";
          cin >> miliLluvia;
          cout << "visibilidad:";
          cin >> visibilidad;

          if(temperatura>temMaxima){
                temMaxima=temperatura;
                 posicion=i;
          }
            if(i==1||temperatura<temMinima){
               temMinima=temperatura;
             }

              if(visibilidad < 2){
                niebla++;

              }

              if(miliLluvia>0){
                diasLluvia++;
              }

             totalDias++;









        }

              amplitud=temMaxima-temMinima;
              cout << "la temperatura maxima fue:" << temMaxima << "C" << endl;
              cout << "el dia con mayor temperatura fue:" << posicion << endl;
              cout << "la amplitud termica fue de: " << amplitud << "C" << endl;
              cout << "dias con niebla:" << niebla << endl;

              if(diasLluvia>totalDias/2){
                cout << "quincena lluviosa" << endl;

              }else if(diasLluvia>=totalDias/3){
                cout << "quincena humeda" << endl;

              } else {
                 cout << "quincena seca" << endl;

              }


   return 0;
}
