#include "CStack.h"

#ifndef CVECTEUR_H_INCLUDED
#define CVECTEUR_H_INCLUDED

class CVecteur{
private:
    CStack** vector;
    int size;
    int queue;

public:
    CVecteur(int size=5);
    CStack*& operator[](int i); //lvalue
    const CStack*& operator[](int i); //rvalue
};

#endif // CVECTEUR_H_INCLUDED
