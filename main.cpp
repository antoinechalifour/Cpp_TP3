#include <iostream>
#include "CStack.h"
#include "C_Pile.h"
#include "C_File.h"
#include "operators.h"

using namespace std;

int main()
{
    cout << "----------TP3 - Héritage-------------" << endl;

    //1 1.1 Liaison statique
    /*
    try{
        int res;
        C_Pile lifo;
        C_File fifo;

        cout<<"Pile ("<<lifo.getSize()<<") "<<endl;
        lifo<0<1;
        cout<<lifo<<endl;
        lifo>res;
        cout<<"Dernier element depile : "<<res<<endl;

        cout<<"File ("<<fifo.getSize()<<") "<<endl;
        fifo<0<1;
        cout<<fifo<<endl;
        fifo>res;
        cout<<"Dernier element depile : "<<res<<endl;
    }
    catch(int e){
        cout<<e<<" _ bad index exception."<<endl;
    }
    */

    //1 1.2 - Liaison dynamique
    try{
        CStack* ptStack;
        int res;
        C_Pile lifo;
        C_File fifo;

        ptStack=&lifo;
        cout<<"Pile ("<<ptStack->getSize()<<") "<<endl;
        *ptStack<0<1;
        cout<<*ptStack<<" - index last : "<<ptStack->getLast()<<endl;
        *ptStack>res;
        cout<<"Dernier element depile : "<<res<<endl;
        cout<<*ptStack<<" - index last : "<<ptStack->getLast()<<endl;

        ptStack=&fifo;
        cout<<"File ("<<ptStack->getSize()<<") "<<endl;
        *ptStack<0<1<2<3<4;
        cout<<*ptStack<<" - index last : "<<ptStack->getLast()<<endl;
        *ptStack>res;
        cout<<"Dernier element depile : "<<res<<endl;
        cout<<*ptStack<<" - index last : "<<ptStack->getLast()<<endl;
    }
    catch(int e){
        cout<<e<<" - bad index exception."<<endl;
    }

    return 0;
}
