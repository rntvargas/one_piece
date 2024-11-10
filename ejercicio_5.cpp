#include <iostream>
using namespace std;

void fusion(int arreglo[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arreglo[izquierda + i];
    for (int i = 0; i < n2; i++) R[i] = arreglo[medio + 1 + i];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arreglo[k++] = L[i++];
        else arreglo[k++] = R[j++];
    }

    while (i < n1) arreglo[k++] = L[i++];
    while (j < n2) arreglo[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void ordenamientoMezcla(int arreglo[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        ordenamientoMezcla(arreglo, izquierda, medio);
        ordenamientoMezcla(arreglo, medio + 1, derecha);
        fusion(arreglo, izquierda, medio, derecha);
    }
}

int main() {
    int arreglo[] = {30, 22, 45, 15, 28}; 
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    ordenamientoMezcla(arreglo, 0, n - 1);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}

