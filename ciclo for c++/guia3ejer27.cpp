#include <iostream>
using namespace std;
/**
 Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
- N�mero de d�a (entero)
- Temperatura (fl oat)
- Mil�metros de lluvia (fl oat)
- Visibilidad en km (fl oat)
Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
- El n�mero del d�a que se haya registrado la temperatura m�xima.
- La amplitud t�rmica de todo el per�odo.
- La cantidad de d�as con neblina.
- Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda"
si llovi� en al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".
NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
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
