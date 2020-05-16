#ifndef PACIJENT_HPP_INCLUDED
#define PACIJENT_HPP_INCLUDED
#include "Bolest.hpp"
#include <fstream>
enum poll{musko1=1,zensko1};
class Pacijent
{
private:
string ime,prezime;
int starost;
poll a;
Bolest b;
public:
    Pacijent(int x,poll g,tipBolesti z,int d,podelaBolesti p, vrstaLeka v,string I,string P):b(z,p,d,v)
    {
        ime=I;
        prezime=P;
         starost=x;
         a=g;
    }
    void citanje()
    {
        string linija;
        ifstream fajl ("Fajl.txt");
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
              cout<<linija<<endl;
            }
            fajl.close();

        }

        else
            cout << "Fajl nije otvoren";
    }
    string getime()const
    {
        return ime;
    }
    string getprezime()const
    {
        return prezime;
    }
     friend ostream&operator<<(ostream&izlaz,const Pacijent& p)
    {
        izlaz<<"ime "<<p.ime<<endl;
        izlaz<<"prezime "<<p.prezime<<endl;
        izlaz<<"starost "<<p.starost<<endl;
        izlaz<<"pol"<<p.a<<endl;
        izlaz<<"bolest"<<p.b<<endl;
        return izlaz;
    }

};


#endif // PACIJENT_HPP_INCLUDED
