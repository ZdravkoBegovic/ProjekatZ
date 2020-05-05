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
    Pacijent(int x,poll g,tipBolesti z,int d,podelaBolesti p, vrstaLeka v):b(z,p,d,v)
    {
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

};


#endif // PACIJENT_HPP_INCLUDED
