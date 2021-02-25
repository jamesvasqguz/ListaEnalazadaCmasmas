#ifndef NODO_H
#define NODO_H
#include <string>
#include "Numero.h"
class Nodo
{
private:
    /* data */
public:
    Nodo();
    Numero *inicio;
    void insertarNodo(int);
    void imprimirNodo();
    void eliminarNodo(int);
    void eliminarUltimo();
};
#endif