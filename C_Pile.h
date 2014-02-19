#include "CStack.h"
#ifndef C_PILE_H_INCLUDED
#define C_PILE_H_INCLUDED

class C_Pile: public CStack{
private:
    int sommet;

public:
    C_Pile(int size=5);
    C_Pile& operator<(int i);
    C_Pile& operator>(int& i);
    int getLast() const;
};

#endif // C_PILE_H_INCLUDED
