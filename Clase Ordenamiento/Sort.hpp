#ifndef SORT_HPP_INCLUDED
#define SORT_HPP_INCLUDED

class Sort{
public:
    ~Sort();
    void getElements(int nElemts);
    void printElements();
    void bubble();
    void quickSort(int inicio, int fin);
    int divide(int inicio, int fin);
private:
    int nElement;
    int *Elements;
};

#endif // SORT_HPP_INCLUDED
