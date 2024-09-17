#include <iostream>
using namespace std;

class Algoritmos {
public:
    void notacionO() {
        // Notacion O(n)
        int entrada;
        cout << "Ingresa el tamaño de la entrada: ";
        cin >> entrada;
        for (int i = 0; i <= entrada; i++) {
            cout << i << endl;
        }
    }

    void NotacionO1() {
        int arr[5] = {6, 7, 8, 9, 10};
        int posicion;
        cout << "Ingresa la posición del arreglo (0-4): ";
        cin >> posicion;
        if (posicion >= 0 && posicion < 5) {
            cout << arr[posicion] << endl;
        } else {
            cout << "Posición fuera de rango" << endl;
        }
    }

    void NotacioOn2() {
        // Notacion O(n^2)
        int entrada;
        cout << "Ingresa el tamaño de la entrada: ";
        cin >> entrada;
        for (int i = 0; i < entrada; i++) {
            cout << "Vuelta " << i + 1 << endl;
            for (int j = 0; j < 2; j++) {
                cout << "Hola " << j + 1 << endl;
            }
        }
    }
};

int main() {
    Algoritmos alg;
    int opcion;
    cout << "Ingresa la opcion del menu:" << endl;
    cout << "1.-NotacionO" << endl;
    cout << "2.-NotacionO1" << endl;
    cout << "3.-NotacioOn2" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            alg.notacionO();
            break;
        case 2:
            alg.NotacionO1();
            break;
        case 3:
            alg.NotacioOn2();
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }

    return 0;
}