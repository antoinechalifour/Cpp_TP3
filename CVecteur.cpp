#include <stdlib.h>
#include "CVecteur.h"

CVecteur::CVecteur(int size):
    size(size),
    queue(-1)
{
    vector = (CStack **) malloc(size * sizeof(CStack*));
}


CStack*& CVecteur::operator[](int i){
    if(i<0) throw -1;
    if(i>=size) throw -2;

    return vector[i];
}

const CStack*& operator[](int i){
    if(i<0) throw -1;
    if(i>=size) throw -2;

    return vector[i];
}
