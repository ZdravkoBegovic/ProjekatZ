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
    Pacijent(int x,poll musko1,tipBolesti z,podelaBolesti p):Bolest(z,p)
    {
         starost=x;
         a=u;
         b=z;
    }

};


#endif // PACIJENT_HPP_INCLUDED
