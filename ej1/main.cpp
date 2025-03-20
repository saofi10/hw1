#include "punto1.hpp"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un valor entero positivo mayor a 0: ";
    cin >> n;

    int** m = matriz(n);
    if (m == nullptr) return 1; // Si n es invalido

    cout << "Elementos en orden descendente:" << endl;
    imprimirMatriz(m, n);

    liberarMatriz(m, n); // liberar matriz

    return 0;
}