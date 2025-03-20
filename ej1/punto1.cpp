#include "punto1.hpp"
#include <iostream>
using namespace std;

int** matriz(int n) {
    if (n < 1) {
        cout << "El valor de n debe ser mayor a 0." << endl;
        return nullptr; // Nullptr si el valor es invalido
    }

    int** matriz = new int*[n]; // Crear espacio matriz
    int val = 1;
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n]; // Crear fila
        for (int j = 0; j < n; j++) {
            matriz[i][j] = val++;
        }
    }
    return matriz; 
}

void imprimirMatriz(int **matriz, int n) {
    if (matriz == nullptr) return; // Por si hacen mal el n o la matriz no se creo

    int final = n * n; // Porque es el valor ultimo de la matriz
    for (int k = final - 1; k >= 0; k--) {
        int i = k / n;
        int j = k % n;
        cout << "M[" << i << "][" << j << "] = " << matriz[i][j] << endl;
    }
}

void liberarMatriz(int **matriz, int n) {
    if (matriz == nullptr) return; // Por si hacen mal el n o la matriz no se creo

    for (int i = 0; i < n; i++) {
        delete[] matriz[i]; // Liberar fila
    }
    delete[] matriz; // Liberar matriz
}