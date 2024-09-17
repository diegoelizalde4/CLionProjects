#include <iostream>
#include <cstring>
#include "Ahorcado.h"
#include "monito.h"
using namespace std;

void Ahorcado() {
    int Intentos = 0;
    const int Max_Intentos = 6;
    char Palabra[] = "CARRO";
    char letra;
    char Palabra2[6];

    for (int i = 0; i < 5; i++) {
        Palabra2[i] = '_';
    }
    Palabra2[5] = '\0';

    while (Intentos < Max_Intentos && strcmp(Palabra, Palabra2) != 0) {
        MostrarMonito(Intentos);
        cout << "Palabra: " << Palabra2 << endl;
        cout << "Ingresa una letra: ";
        cin >> letra;

        bool acierto = false;

        for (int k = 0; k < 5; k++) {
            if (letra == Palabra[k]) {
                Palabra2[k] = letra;
                acierto = true;
            }
        }

        if (!acierto) {
            Intentos++;
        }
    }

    MostrarMonito(Intentos);

    if (strcmp(Palabra, Palabra2) == 0) {
        cout << "¡Felicidades!: " << Palabra << endl;
    } else {
        cout << "La palabra era: " << Palabra << endl;
    }
}
