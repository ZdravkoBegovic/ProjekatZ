#ifndef CISTACICA_HPP_INCLUDED
#define CISTACICA_HPP_INCLUDED
#include "Osoblje.hpp"
class Cistacica : public Osoblje
{
protected:
    int brojRadnihSati;
public:
    Cistacica(int b,int s,pol o,int n,string h,string j):Osoblje(s,o,n,h,j)
    {
        brojRadnihSati=b;
    }
     friend ostream&operator<<(ostream&izlaz,const Cistacica& C)
    {
        izlaz<<"ime i prezime  "<<C.ime<<C.prezime<<endl;
        izlaz<<C.starost<<"Godina"<<endl;
        izlaz<<C.davidimopol()<<endl;
        izlaz<<C.godineRadnogIskustva<<endl;
        return izlaz;
    }
};



#endif // CISTACICA_HPP_INCLUDED
