#ifndef BOLEST_HPP_INCLUDED
#define BOLEST_HPP_INCLUDED
#include "Lek.hpp"
enum tipBolesti{Dijabetes,BolestSrca,KoznaBolest};
enum podelaBolesti{Zarazna,Teska,Laka,Nezarazna};
class Bolest
{
private:
tipBolesti a;
podelaBolesti p;
Lek k;
public:
    Bolest(tipBolesti v, podelaBolesti m):Lek()
    {
        a=v;
        p=m;
        k=j;
    }
};





#endif // BOLEST_HPP_INCLUDED

