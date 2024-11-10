#include <iostream>
using namespace std;

void ordenamientoSeleccion(int arreglo[], int n) {
    int comparaciones = 0;
    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (arreglo[j] < arreglo[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        int temp = arreglo[i];
        arreglo[i] = arreglo[indiceMinimo];
        arreglo[indiceMinimo] = temp;
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nTotal de comparaciones: " << comparaciones << endl;
}

int main() {
    int arreglo[] = {580, 320, 760, 435, 520};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    ordenamientoSeleccion(arreglo, n);
    return 0;
}
