#ifndef CSTACK_H_INCLUDED
#define CSTACK_H_INCLUDED

class CStack{
protected:
    int *tab;
    int size;

public:
    CStack(int size=5);
    int operator[](int i) const;
    int getSize();
    virtual int getLast() const =0;
    virtual CStack& operator<(int i)=0;
    virtual CStack& operator>(int& i)=0;
};

#endif // CSTACK_H_INCLUDED
