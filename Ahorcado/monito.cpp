#include <iostream>
using namespace std;
#include "monito.h"

void MostrarMonito(int Intentos) {
    if (Intentos == 0) {
        cout << "   ---" << endl;
        cout << "   |   |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 1) {
        cout << "   +---+" << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 2) {
        cout << "   ---" << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "   |   |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 3) {
        cout << "   ---" << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "  /|   |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 4) {
        cout << "   ---" << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "  /|\\  |" << endl;
        cout << "       |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 5) {
        cout << "   ---  " << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "  /|\\  |" << endl;
        cout << "  /    |" << endl;
        cout << "       |" << endl;

    } else if (Intentos == 6) {
        cout << "   ---" << endl;
        cout << "   |   |" << endl;
        cout << "   O   |" << endl;
        cout << "  /|\\  |" << endl;
        cout << "  / \\  |" << endl;
        cout << "       |" << endl;

    }
}
