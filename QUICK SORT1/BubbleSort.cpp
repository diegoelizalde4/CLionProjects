#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int Pivote;
    int Auxiliar;
    int n;
    cout << "Ingresa el tamaño del arreglo: ";
    cin >> n;

    // Se declara y se llena el arreglo
    int arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50; // Llena el arreglo con números aleatorios entre 0 y 49
    }

    // Se imprime el arreglo Original
    cout << "Arreglo Original: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Se hace el for del arreglo para ordenar
    for (int i = 0; i < n - 1; i++) {
        // Se toma el pivote
        cout<<"Paso: "<<i+1<<endl;
        for (int j = 0; j < n - i - 1; j++) {
            Pivote = arr[j];
            // Si el pivote es mayor al siguiente, se cambian posiciones
            if (Pivote > arr[j + 1]) {
                Auxiliar = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = Auxiliar;
            }
            for(int k=0; k<n-1; k++) {
                cout<<arr[k];
            }
        }
    }

    // Se imprime el arreglo Final
    cout << "Arreglo Final: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
