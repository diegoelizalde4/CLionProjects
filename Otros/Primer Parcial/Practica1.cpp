#include <iostream>
#include <random>
using namespace std;

int main() {
    // Se declara el arreglo y se llena de números random
    int arr[50];
    srand(time(0)); // Inicializa la semilla para generar números aleatorios
    for(int i = 0; i < 50; i++) {
        arr[i] = rand() % 100; // Llena el arreglo con números aleatorios entre 0 y 99
    }



    // Se declara la variable bus, con la cual se buscará dentro del arreglo
    int busqueda;
    // Se ingresa el valor a buscar
    cout << "Ingresa el numero que desea buscar en el arreglo: ";
    cin >> busqueda;

    // Mostrar todo el arreglo
    cout << "Contenido del arreglo: ";
    for(int i = 0; i < 50; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Se inicializa la variable cont, con la cual el while va a iterar hasta encontrar la variable
    // bus dentro del arreglo de 50, por lo tanto debe de hacer 50 iteraciones
    int i = 0;
    bool encontrado = false;
    //Se hace una bandera, con la cual si se encuentra se hace verdadera y se truena el while
    while (i < 50 && !encontrado) {
        if (arr[i] == busqueda) {
            encontrado = true;
        }
        i++;
    }

    if (encontrado) {
        cout << "El número " << busqueda << " se encontró en el arreglo." << endl;
    } else {
        cout << "El número " << busqueda << " no se encontró en el arreglo." << endl;
    }

    return 0;
}
