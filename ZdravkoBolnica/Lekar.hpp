#ifndef LEKAR_HPP_INCLUDED
#define LEKAR_HPP_INCLUDED
#include "Osoblje.hpp"
#include "Specijalizacija.hpp"
#include <iostream>
using namespace std;
class Lekar: public Osoblje
{
private:
    int brojradnihsati;
public:
    Lekar(int u,int m,pol k,int l):Osoblje(m,k,l)
    {
        brojradnihsati=u;
    }
    void ispis (Lekar l)
    {
        cout<<"imam"<<l.brojradnihsati<<"godina staza"<<endl;
    }
};


#endif // LEKAR_HPP_INCLUDED

