#include "CStack.h"

#ifndef C_FILE_H_INCLUDED
#define C_FILE_H_INCLUDED

class C_File: public CStack{
private:
    int queue;

public:
    C_File(int size=5);
    C_File& operator<(int i);
    C_File& operator>(int& i);
    int getLast() const;
};

#endif // C_FILE_H_INCLUDED
