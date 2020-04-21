#include <iostream>
using namespace std;

class ADT {
    private:
    int *Elementos;
    int nElementos = 20;
    int longitud;

    public:
    ~ADT();
    void obtenerElementos(int longitud);
    void mostrarElementos();
    void agregarElemento(int nuevoElemento);
    void insertarElemento(int nuevoElemento, int indice);
    void borrarElemento(int indice);
    int busquedaLineal(int elemento);
    int busquedaBinariaLoop(int elemento);
    void min();
    void max();
    void suma();
    void promedio();
    void invertir();
    void rotarIzquierda();
    void rotarDerecha();
    
};