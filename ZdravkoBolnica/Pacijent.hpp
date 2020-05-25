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
static int pacijenti;

public:
    Pacijent(int x,poll g,tipBolesti z,int d,podelaBolesti p, vrstaLeka v,string I,string P):b(z,p,d,v)
    {
        ime=I;
        prezime=P;
         starost=x;
         a=g;
         pacijenti++;
    }
    int getbroj1 ()const
    {
        return pacijenti;
    }
    ~Pacijent()
    {
        pacijenti--;
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
    string davidimopol()const
    {
        string S;
        switch(a)
        {
            case 1:S="musko";
                    break;
            case 2:S="zensko";
                    break;

        }
        return S;
    }
     friend ostream&operator<<(ostream&izlaz,const Pacijent& p)
    {
        izlaz<<"ime i prezime  "<<p.ime<<p.prezime<<endl;
        izlaz<<p.starost<<"Godina"<<endl;
        izlaz<<p.davidimopol()<<endl;
        izlaz<<p.b;
        return izlaz;
    }

};


#endif // PACIJENT_HPP_INCLUDED
