#include "Nodo.h"
#include <iostream>
using namespace std;

Nodo::Nodo() {
    this->inicio = NULL;
}

void Nodo::insertarNodo(int number){
    Numero *nuevo = new Numero(number);
    if (inicio==NULL){
        inicio = nuevo;
    } else {
        Numero *aux = inicio;
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
}

void Nodo::imprimirNodo(){
    Numero *temp = inicio;
    do{
        cout << temp->id << endl;
        temp = temp->siguiente;
    } while (temp!=NULL);
}

void Nodo::eliminarNodo(int num){
    Numero *temp = inicio;
    while(temp->siguiente!=NULL){
        if ((temp->siguiente)->id == num){
            Numero *aux = temp->siguiente;
            temp->siguiente = aux->siguiente;
            free(aux);
            break;
        } else {
            temp = temp->siguiente;
        }
    }
}

void Nodo::eliminarUltimo(){
    Numero *temp = inicio;
    while(temp->siguiente!=NULL){
        if ((temp->siguiente)->siguiente == NULL){
            Numero *aux = temp->siguiente;
            temp->siguiente = aux->siguiente;
            free(aux);
            break;
        } else {
            temp = temp->siguiente;
        }
    }
}
