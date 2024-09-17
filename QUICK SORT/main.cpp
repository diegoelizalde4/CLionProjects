#include <iostream>
using namespace std;

// Función para intercambiar dos elementos
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para realizar la partición del array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Elegimos el último elemento como pivote
    int i = low - 1; // Índice del elemento más pequeño

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Función de Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // pi es el índice de partición
        quickSort(arr, low, pi - 1); // Ordenar la parte izquierda
        quickSort(arr, pi + 1, high); // Ordenar la parte derecha
    }
}

int main() {
    int n;
    cout << "Ingresa el tamaño del array: ";
    cin >> n;

    int arr[n];
    cout << "Ingresa los elementos del array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
