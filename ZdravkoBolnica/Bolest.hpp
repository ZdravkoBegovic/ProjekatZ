#ifndef BOLEST_HPP_INCLUDED
#define BOLEST_HPP_INCLUDED
#include "Lek.hpp"
enum tipBolesti{Dijabetes=1,BolestSrca,KoznaBolest};
enum podelaBolesti{Zarazna=1,Teska,Laka,Nezarazna};
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
    podelaBolesti getg()const
    {
        return p;
    }
    string davidimotip()const
    {
        string S1;
        switch(p)
        {
        case 1:S1="Dijabetes";
                    break;
        case 2:S1="Bolest srca";
                    break;
        case 3:S1="Kozna bolest";
                    break;
        return S1;
        }
    }
    string davidimopodelu()const
    {
        string S2;
        switch(a)
        {
        case 1:S2="Zarazna";
                    break;
        case 2:S2="Teska";
                    break;
        case 3:S2="Laka";
                    break;
        case 4:S2="Nezarazna";
                    break;
        return S2;
        }
    }
    friend ostream&operator<<(ostream&izlaz,const Bolest &b)
    {
        izlaz<<"tip bolesti";
        izlaz<<b.davidimotip()<<endl;
        izlaz<<"stanje";
        izlaz<<b.davidimopodelu()<<endl;
        return izlaz;
    }
};





#endif // BOLEST_HPP_INCLUDED

