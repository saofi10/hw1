#include <iostream>
#include <string>
#include <memory>
#include "punto3.hpp"
using namespace std;

unique_ptr<Nodo> create_node(int value) {
    
    return make_unique<Nodo>(Nodo{value, nullptr});
}

void push_front(int val, listaEnlazada* lista){
    unique_ptr<Nodo>nuevo=create_node(val);
    nuevo->prox=move(lista->head);
    lista->head=move(nuevo);
    lista->size++;
}

void push_back(int val, listaEnlazada* lista) {
    unique_ptr<Nodo> nuevo = create_node(val);

    if (!lista->head) { // Si la lista está vacía
        lista->head = move(nuevo);
    } else {
        Nodo* temp = lista->head.get();
        while (temp->prox) { // Avanzar hasta el último nodo
            temp = temp->prox.get();
        }
        temp->prox = move(nuevo);
    }

    lista->size++;
}

void insert(int val, int pos, listaEnlazada*lista){
    if (pos == 0) {//es poner en head
        push_front(val, lista);
        return;
    }

    if (lista->size<pos||pos<0){
        cout<<"La posicion deseada es mas larga que la lista (o negativa)! El nodo se insertara al final"<<endl;
        push_back(val,lista);//poner al final
        return ;
    }
    else{
        unique_ptr<Nodo>nuevo=create_node(val);
        Nodo*aux=lista->head.get();
        for (int i=0;i<pos-1;i++){
            aux=aux->prox.get();
        }
        nuevo->prox = move(aux->prox);
        aux->prox=move(nuevo);
        lista->size++;
    }return;
}


void erase(int pos, listaEnlazada*lista){
    if (!lista or !lista->head){return;} //no hay nada que borrar
    if (pos == 0) { // borrar head
        lista->head = move(lista->head->prox);}
    if (lista->size<pos||pos<0){
        cout<<"La posicion deseada es mas larga que la lista(o negativa)! Se borrara el nodo del final"<<endl;
        pos=lista->size-1;//actualizo que pos sea el ultimo lugar
    }
    
    if(lista->size>pos){ //a esto lo pongo para que entre si o si em algo pero sin ser un else, para que ocurra despues de cambiar lo de la posicion
        Nodo*aux=lista->head.get();
        for (int i=0;i<pos-1;i++){
            aux=aux->prox.get();}        
    
    aux->prox = move(aux->prox->prox);//el punteo a prox deja de existir, resuelto por smart pointer
        }
    lista->size--;
    return;
}

void print_list(listaEnlazada*lista){

    Nodo* aux = lista->head.get();
    while (aux) {
        cout << aux->valor << " -> ";
        aux = aux->prox.get();
    }
    cout << "NULL" << endl;
}
