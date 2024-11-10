#include <iostream>
using namespace std;

int particion(int arreglo[], int bajo, int alto) {
    int pivote = arreglo[alto];
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (arreglo[j] < pivote) {
            i++;
            int temp = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = temp;
        }
    }
    int temp = arreglo[i + 1];
    arreglo[i + 1] = arreglo[alto];
    arreglo[alto] = temp;
    return i + 1;
}

void ordenamientoRapido(int arreglo[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arreglo, bajo, alto);
        ordenamientoRapido(arreglo, bajo, pi - 1);
        ordenamientoRapido(arreglo, pi + 1, alto);
    }
}

int main() {
    int arreglo[] = {850, 230, 690, 540, 310};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    ordenamientoRapido(arreglo, 0, n - 1);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
