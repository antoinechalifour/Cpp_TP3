#include <iostream>
#include "Fille.h"

using namespace std;

void Fille::AfficherI(){
    Mere1::Methode();
    cout<<"Valeur de i : "<<Mere1::i<<endl;
    cout<<"Valeur de i : "<<Mere2::i<<endl;
}
