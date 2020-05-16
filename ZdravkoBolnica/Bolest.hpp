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
    Bolest(tipBolesti v,podelaBolesti m,int d,vrstaLeka c):k(d,c)
    {
        a=v;
        p=m;
    }
    friend ostream&operator<<(ostream&izlaz,const Bolest &b)
    {
        izlaz<<"tip bolesti"<<b.a<<endl;
        izlaz<<"podela bolesti "<<b.p<<endl;
        izlaz<<"lek"<<b.k<<endl;
        return izlaz;
    }
};





#endif // BOLEST_HPP_INCLUDED

