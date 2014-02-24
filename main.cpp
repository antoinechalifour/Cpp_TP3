#include <iostream>
#include "CStack.h"
#include "C_Pile.h"
#include "C_File.h"
#include "CVecteur.h"
#include "operators.h"
#include "Fille.h"

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
    /*
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
    */

    //2 - Transtypage
    /*
    CVecteur v;
    C_Pile pile, *pPile;
    C_File file, *pFile;

    try{
        v[0]=&pile;
        v[1]=&file;

        pPile = dynamic_cast<C_Pile*> (v[0]);
        if(pPile) cout<<"OK"<<endl;
        else cout<<"KO"<<endl;

        pFile = dynamic_cast<C_File*> (v[1]);
        if(pFile) cout<<"OK"<<endl;
        else cout<<"KO"<<endl;
    }
    catch(int e){
        cout<<e<<" - bad index exception."<<endl;
    }
    */

    //Exercice Bonus
    Fille f;
    f.AfficherI();

    return 0;
}
