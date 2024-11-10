#include <iostream>
using namespace std;

void ordenamientoBurbuja(int arreglo[], int n) {
    int intercambios = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
                intercambios++;
            }
        }
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nTotal de intercambios: " << intercambios << endl;
}

int main() {
    int arreglo[] = {125, 90, 150, 105, 80};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    ordenamientoBurbuja(arreglo, n);
    return 0;
}
