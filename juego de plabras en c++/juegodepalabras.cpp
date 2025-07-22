#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
#include <algorithm> 
#include <cctype>   
using namespace std;
// Funcion para obtener una letra aleatoria
char obtenerLetraAleatoria() {
    // Genera un numero aleatorio entre 0 y 25 (para las 26 letras del abecedario)
    int num = rand() % 26;
    return static_cast<char>('a' + num); // Convierte el numero a una letra minuscula
}

int main() {
    // Inicializa el generador de numeros aleatorios
    srand(static_cast<unsigned int>(time(0)));

    vector<string> palabrasCompletadas;
    vector<char> letrasSinCompletar;
    char abecedario[26]; // Para llevar un registro de las letras que ya salieron o se completaron

    // Inicializar el abecedario con todas las letras
    for (int i = 0; i < 26; ++i) {
        abecedario[i] = static_cast<char>('a' + i);
    }

    cout << "Bienvenido al juego de palabras!" << endl;
    cout << "Se te presentara una letra, y deberas escribir una palabra que empiece con esa letra." << endl;
    cout << "Escribe 'salir' para terminar el juego en cualquier momento." << endl << endl;

    char letraActual;
    string palabraIngresada;
    int letrasRestantes = 26; // Contador para saber cuantas letras quedan por jugar

    while (letrasRestantes > 0) {
        // Asegurarse de que la letra sea una que todavia no se ha jugado
        do {
            letraActual = obtenerLetraAleatoria();
        } while (abecedario[letraActual - 'a'] == ' '); // ' ' indica que ya se uso la letra

        cout << "Letra: " << static_cast<char>(toupper(letraActual)) << endl; // Muestra la letra en mayuscula
        cout << "Ingresa una palabra que empiece con '" << static_cast<char>(toupper(letraActual)) << "': ";
        getline(cin, palabraIngresada); // Lee la linea completa

        if (palabraIngresada == "salir") {
            break; // Termina el juego si el usuario escribe "salir"
        }

        // Convertir la primera letra de la palabra ingresada a minuscula para la comparacion
        char primeraLetraIngresada = tolower(palabraIngresada[0]);

        if (!palabraIngresada.empty() && primeraLetraIngresada == letraActual) {
            palabrasCompletadas.push_back(palabraIngresada);
            cout << "Correcto! Palabra guardada." << endl << endl;
            // Marca la letra como usada
            abecedario[letraActual - 'a'] = ' ';
            letrasRestantes--;
        } else {
            cout << "Esa palabra no empieza con la letra correcta o este vacia. Intentalo de nuevo." << endl << endl;
            // Si no se ingresa la palabra correcta, se considera como no completada para esta iteración
            letrasSinCompletar.push_back(letraActual);
            // No decrementamos letrasRestantes porque la letra no fue "completada" en el sentido de que una palabra correcta fue ingresada
            // y la idea es seguir intentando con esa letra o con otras si el usuario desea.
            // Para el proposito de este programa inicial, se agrega a "sin completar" y la letra se puede repetir.
           
        }
    }

 

    cout << "\n--- FIN DEL JUEGO ---" << endl;

    if (!palabrasCompletadas.empty()) {
        cout << "\nPalabras que formaste:" << endl;
        for (const string& palabra : palabrasCompletadas) {
            cout << "- " << palabra << endl;
        }
    } else {
        cout << "\nNo formaste ninguna palabra." << endl;
    }

    if (!letrasSinCompletar.empty()) {
        cout << "\nLetras con las que no se te ocurrio ninguna palabra:" << endl;
        // Para evitar repeticiones en las letras sin completar
        sort(letrasSinCompletar.begin(), letrasSinCompletar.end());
        letrasSinCompletar.erase(unique(letrasSinCompletar.begin(), letrasSinCompletar.end()), letrasSinCompletar.end());

        for (char letra : letrasSinCompletar) {
            cout << "- " << static_cast<char>(toupper(letra)) << endl;
        }
    } else {
        cout << "\n¡Completaste todas las letras que te salieron!" << endl;
    }

    return 0;
}