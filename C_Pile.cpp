#include "C_Pile.h"

C_Pile::C_Pile(int size):
    CStack(size)
{
    sommet=-1;
}

C_Pile& C_Pile::operator<(int i){
    if(sommet+1>=size) throw -1;
    tab[++sommet]= i;

    return *this;
}

C_Pile& C_Pile::operator>(int& i){
    if(sommet-1<0) throw -2;
    i=tab[sommet--];

    return *this;
}

int C_Pile::getLast() const{ return sommet;}
