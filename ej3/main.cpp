#include "punto3.hpp"

int main(){
    listaEnlazada lista; 

    push_back(16, &lista);
    push_back(26, &lista);   //pasar por referencia las listas en lugar d ela lista en si funciona mejor porque no se tiene que hacer una copia de la lista, solo se copia el puntero en la funcion
    push_back(36, &lista);
    push_front(7, &lista);
    insert(9888, 2, &lista);
    erase(1, &lista);

    print_list(&lista);

    return 0;
}