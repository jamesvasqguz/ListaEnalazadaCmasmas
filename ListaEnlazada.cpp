#include <cstdlib>
#include "Nodo.h"
#include <string>
#include <iostream>
typedef Nodo* nodos;
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    nodos nue = new Nodo();
    for (int i = 0; i < 10; i++){
        nue->insertarNodo(i);
    }
    cout << "Numeros ingresados: "<<endl;
    nue->imprimirNodo();
    cout << endl;
    cout << "Numero a eliminar: 2\n"<<endl;
    nue->eliminarNodo(2);
    cout << "Numeros ingresados luego de eliminar el 2"<<endl;
    nue->imprimirNodo();
    cout << "\nLuego de eliminar ultimo\n";
    nue->eliminarUltimo();
    nue->imprimirNodo();
    return 0;
}