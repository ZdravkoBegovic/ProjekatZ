#ifndef PACIJENT_HPP_INCLUDED
#define PACIJENT_HPP_INCLUDED
#include "Bolest.hpp"
enum poll{musko1,zensko1};
class Pacijent
{
private:
string ime,prezime;
int starost;
poll a;
Bolest b;
public:
    Pacijent(int x,poll g,tipBolesti z,int d,podelaBolesti p, vrstaLeka v):b(z,p,d,v)
    {
         starost=x;
         a=g;
    }

};


#endif // PACIJENT_HPP_INCLUDED
