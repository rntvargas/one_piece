#include <iostream>
using namespace std;

void insercionDirecta(int arreglo[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] > clave) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = clave;
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int arreglo[] = {250, 120, 300, 95, 210};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    insercionDirecta(arreglo, n);
    return 0;
}
