#ifndef SORT_HPP_INCLUDED
#define SORT_HPP_INCLUDED

class Sort{
public:
    ~Sort();
    void getElements(int nElemts);
    void printElements();
    void bubble();
private:
    int nElement;
    int *Elements;
};

#endif // SORT_HPP_INCLUDED
