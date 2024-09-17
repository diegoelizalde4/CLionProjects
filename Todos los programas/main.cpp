#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "Seleccion.h"
#include "Insersion.h"
#include "monito.h"
using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int choice, size;
    vector<int> arr;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> size;
    arr.resize(size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Arreglo original: ";
    printArray(arr);

    do {
        cout << "Menu:" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Quick Sort" << endl;
        cout << "4. Selection Sort" << endl;
        cout << "5. Insertion Sort" << endl;
        cout << "6. Ahorcado" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                BubbleSort bubbleSort;
                bubbleSort.sort(arr);
                cout << "Array ordenado con Bubble Sort: ";
                printArray(arr);
                break;
            }
            case 2: {
                MergeSort mergeSort;
                mergeSort.sort(arr, 0, arr.size() - 1);
                cout << "Array ordenado con Merge Sort: ";
                printArray(arr);
                break;
            }
            case 3: {
                QuickSort quickSort;
                quickSort.sort(arr, 0, arr.size() - 1);
                cout << "Array ordenado con Quick Sort: ";
                printArray(arr);
                break;
            }
            case 4: {
                Seleccion seleccionSort;
                seleccionSort.sort(arr);
                cout << "Array ordenado con Selection Sort: ";
                printArray(arr);
                break;
            }
            case 5: {
                Insersion insersionSort;
                insersionSort.sort(arr);
                cout << "Array ordenado con Insertion Sort: ";
                printArray(arr);
                break;
            }
            case 6: {
                int intentos;
                cout << "Ingrese el numero de intentos: ";
                cin >> intentos;
                MostrarMonito(intentos);
                break;
            }
            case 7:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (choice != 7);

    return 0;
}