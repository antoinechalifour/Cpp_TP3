#include "C_File.h"

C_File::C_File(int size):
    CStack(size)
{
    queue=-1;
}

C_File& C_File::operator<(int i){
    if(queue+1>=size) throw -1;
    tab[++queue]= i;

    return *this;
}

C_File& C_File::operator>(int& i){
    i=tab[0];
    for(int j=0 ; j<queue ; j++){
        tab[j]=tab[j+1];
    }

    queue--;
    return *this;
}

int C_File::getLast() const{ return queue;}
