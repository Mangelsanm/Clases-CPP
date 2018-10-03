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
