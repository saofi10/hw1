#include <iostream>
#include <string>
#include <memory>

using namespace std;
struct Nodo{
    //nodo basico de una LSE
    int valor;
    unique_ptr<Nodo> prox;

};

struct listaEnlazada{
    //estructura basica de una lista 
    unique_ptr<Nodo> head; //smart pointer al head
    
    int size=0; // Para controlar el tamaño de la lista
    //Considere que tener un puntero a tail no aportaba mucho para la gracia del ejercicio
};

/** 
* @brief Crea un nuevo nodo con el valor dado
 * @param value Valor que se almacenara en el nodo
 * @return unique_ptr<Nodo> puntero único al nodo nuevo
 */
unique_ptr<Nodo> create_node(int value);
/**
 * @brief Inserta un nodo al inicio de la lista
 * @param val Valor del nodo a insertar en la lista
 * @param lista Puntero a la lista enlazada donde se insertara el nodo (pasar por referencia)
 */
void push_front(int val, listaEnlazada* lista);
/**
 * @brief Inserta un nodo al final de la lista
 * @param val Valor del nodo a insertar en la lista
 * @param lista Puntero a la lista enlazada donde se insertara el nodo (pasar por referencia)
 */
void push_back(int val, listaEnlazada* lista);
/**
 * @brief Inserta un nodo en cierta posicion de la lista, si se elige un nro mayor al largo de la lista, se inserta al final de la misma
 * @param val Valor del nodo a insertar en la lista
 * @param lista Puntero a la lista enlazada donde se insertara el nodo (pasar por referencia)
 */
void insert(int val, int pos, listaEnlazada*lista);
/**
 * @brief  Borra el nodo que se encuentra en cierta posicion de la lista. Si la posicion excede el tamanio de la lista, se elimina el ultimo
 * @param pos Posicion del nodo a borrar en la lista
 * @param lista Puntero a la lista enlazada donde se borrara el nodo (pasar por referencia)
 */
void erase(int pos, listaEnlazada*lista);
/**
 * @brief Imprime una lista
 * @param lista Puntero a la lista enlazada que se va a imprimir
 */
void print_list(listaEnlazada*lista);