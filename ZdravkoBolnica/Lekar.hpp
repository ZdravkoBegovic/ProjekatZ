#ifndef LEKAR_HPP_INCLUDED
#define LEKAR_HPP_INCLUDED
#include "Osoblje.hpp"
#include "Specijalizacija.hpp"
#include <iostream>

using namespace std;
class Lekar: public Osoblje
{
protected:
    Specijalizacija S;
public:
    Lekar(OblastSpecijalizacije Q,VrstaSpecijalizacije q,int m,pol k,int l,string a,string b):Osoblje(m,k,l,a,b),S(Q,q)
    {

    }
    void ispis (Lekar l)
    {
        cout<<"imam"<<"godina staza"<<endl;
    }

     friend ostream&operator<<(ostream&izlaz,const Lekar& L)
    {
        izlaz<<"ime i prezime  "<<L.ime<<L.prezime<<endl;
        izlaz<<L.starost<<"Godina"<<endl;
        izlaz<<L.davidimopol()<<endl;
        izlaz<<L.godineRadnogIskustva<<endl;
        izlaz<<L.S<<endl;
        return izlaz;
    }

  /*   void predstavi_se()
   {
       Osoblje::pretstavi_se();
       cout<<S;
*/  // }
};








#endif // LEKAR_HPP_INCLUDED

