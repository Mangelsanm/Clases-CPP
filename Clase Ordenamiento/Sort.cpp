#include <iostream>
#include "Sort.hpp"
using namespace std;

Sort::~Sort(){
    delete [] Elements;
    }

void Sort::getElements(int nElement){
    this -> nElement = nElement;
    Elements = new int[nElement];

    for(int i = 0; i < nElement; i++) {
        cout << "Elemento" << "[" << i << "]: " << flush;
        cin >> *(Elements+i);
    }
}

void Sort::printElements() {
    cout << endl;
    cout << "Arreglo ordenado" << endl;
    cout << "[" << flush;
    for(int j = 0; j < nElement; j++) {
        if(j < nElement - 1) {
            cout << Elements[j] << ", " << flush;
        }else{
            cout << Elements[j] << flush;
        }
    }
    cout << "]" << endl;
}

void Sort::bubble(){
    for(int i = 0; i < nElement; i++) {
        for(int j = 0; j < nElement - 1; j++) {
            if(Elements[j] > Elements[j+1]) {
                int auxiliar = Elements [j];
                Elements[j] = Elements[j+1];
                Elements[j+1] = auxiliar;
            }
        }
    }
}

void Sort::quickSort(int inicio, int fin){
    int pivote;
    if(inicio < fin){
        pivote = divide(inicio, fin);
        quickSort(inicio, pivote);
        quickSort(pivote + 1, fin);
    }
}

int Sort::divide(int inicio, int fin){
    int pivote = fin - 1;
    int izquierda = inicio;
    int derecha = fin - 2;
    int auxiliar = 0;

    while(izquierda <= derecha){
        while(Elements[izquierda] < Elements[pivote]){
            izquierda++;
        }
        while(Elements[derecha] > Elements[pivote]){
            derecha--;
        }
        if(izquierda < derecha){
            auxiliar = Elements[izquierda];
            Elements[izquierda] = Elements[derecha];
            Elements[derecha] = auxiliar;
        }
    }
    auxiliar = Elements[izquierda];
    Elements[izquierda] = Elements[pivote];
    Elements[pivote] = auxiliar;

    return izquierda;
}
