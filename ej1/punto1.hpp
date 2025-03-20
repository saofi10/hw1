#ifndef PUNTO1_HPP
#define PUNTO1_HPP

/**
 * @brief Crea una matriz dinamica de tamanio n x n y la llena con valores ascendentes
 * @param n Tamanio de la matriz 
 * @return Un puntero a la matriz creada o nullptr si n es invalido
 */
int** matriz(int n);

/**
 * @brief Imprime los elementos de una matriz en orden descendente
 * @param matriz Puntero a la matriz que se va a imprimir
 * @param n Tamaño de la matriz 
 */
void imprimirMatriz(int **matriz, int n);

/**
 * @brief Libera la memoria asignada dinamicamente para la matriz
 * @param matriz Puntero a la matriz a liberar
 * @param n Tamanio de la matriz 
 */
void liberarMatriz(int **matriz, int n);

#endif // PUNTO1_HPP