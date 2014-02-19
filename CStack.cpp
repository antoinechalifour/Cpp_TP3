#include <stdlib.h>
#include "CStack.h"

CStack::CStack(int size):
    size(size)
{
    tab = (int*) malloc(size * sizeof(int));
}

int CStack::operator[](int i) const{
    return tab[i];
}

int CStack::getSize(){ return size;}
