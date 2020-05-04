#ifndef LEKAR_HPP_INCLUDED
#define LEKAR_HPP_INCLUDED
#include "Osoblje.hpp"
#include "Specijalizacija.hpp"
#include <iostream>
#include "Specijalizacija.hpp"
using namespace std;
class Lekar: public Osoblje
{
protected:
    Specijalizacija S;
public:
    Lekar(OblastSpecijalizacije m,VrstaSpecijalizacije q,int m,pol k,int l,string a,string b):Osoblje(m,k,l,a,b),S(m,q)
    {

    }
    void ispis (Lekar l)
    {
        cout<<"imam"<<l.brojradnihsati<<"godina staza"<<endl;
    }
};


#endif // LEKAR_HPP_INCLUDED

