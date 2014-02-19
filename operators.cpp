#include "operators.h"

ostream& operator<<(ostream& os, const CStack& stack){
    for(int i=0 ; i<=stack.getLast() ; i++){
        os<<stack[i]<<" ";
    }

    return os;
}
